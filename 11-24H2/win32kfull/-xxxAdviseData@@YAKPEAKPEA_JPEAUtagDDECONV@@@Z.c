/*
 * XREFs of ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0108
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0BF0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0FD0 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1402AF8DC (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1402AF9BC (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1402AFA70 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1402AFB70 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1402AFBC4 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1402B0624 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1402BC1FC (xxxClientFreeDDEHandle.c)
 */

__int64 __fastcall xxxAdviseData(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  void *v6; // rcx
  unsigned int v7; // edi
  struct tagINTDDEINFO *v8; // rsi
  __int16 v9; // ax
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  int v14; // eax
  void *v15; // rax
  struct tagXSTATE *v16; // rax
  struct tagINTDDEINFO *v17; // [rsp+30h] [rbp-10h] BYREF
  void *v18; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v19; // [rsp+88h] [rbp+48h] BYREF

  v19 = 131;
  v6 = *a2;
  v17 = 0LL;
  v18 = 0LL;
  v7 = xxxCopyDdeIn(v6, &v19, &v18, &v17);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
  {
    v7 = 3;
    if ( v17 )
      Win32FreePool(v17);
    return v7;
  }
  if ( v7 == 2 )
  {
    v8 = v17;
    v9 = *((_WORD *)v17 + 36);
    if ( (v9 & 0xA000) == 0 )
    {
      v9 |= 0x2000u;
      *((_WORD *)v17 + 36) = v9;
    }
    if ( (v9 & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v8 + 6), 0x2000LL) )
      {
        Win32FreePool(v8);
        return 3LL;
      }
      v11 = GiveObject(
              *((unsigned __int16 *)v8 + 37),
              *((void **)v8 + 6),
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 464LL) + 56LL));
      v12 = v19;
      if ( v11 )
        v12 = v19 | 0x4000;
      v13 = v12 | 0x400;
    }
    else
    {
      v14 = AddPublicObject(
              *((unsigned __int16 *)v8 + 37),
              *((void **)v8 + 6),
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 464LL) + 56LL));
      v13 = v19;
      if ( v14 )
        v13 = v19 | 0x2000;
    }
    *a1 |= 0x80000000;
    if ( *((__int16 *)v8 + 36) >= 0 )
    {
      xxxClientFreeDDEHandle(v18, v13 & 0xFFFFFFFE);
      if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
      {
        *a2 = 0LL;
        return 3;
      }
      v16 = Createpxs(0LL, 0LL, 0LL, v8, v13 | 0x200);
      if ( v16 )
      {
        *((_QWORD *)v16 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        v15 = *(void **)v16;
      }
      else
      {
        v15 = 0LL;
      }
    }
    else
    {
      v15 = AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxAdviseDataAck, 0LL, v18, v8, v13);
    }
    *a2 = v15;
    if ( !v15 )
      return 3;
  }
  return v7;
}
