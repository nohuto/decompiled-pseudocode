/*
 * XREFs of ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F969C
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FA2A0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FA680 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01F8EBC (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F8F78 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F902C (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01F916C (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01F91C0 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F9BDC (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C0211E90 (xxxClientFreeDDEHandle.c)
 */

__int64 __fastcall xxxAdviseData(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  void *v6; // rcx
  unsigned int v7; // edi
  struct tagINTDDEINFO *v8; // rsi
  __int16 v9; // ax
  void *v10; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  int v15; // eax
  void *v16; // rax
  struct tagXSTATE *v17; // rax
  struct tagINTDDEINFO *v18; // [rsp+30h] [rbp-10h] BYREF
  void *v19; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+48h] BYREF

  v20 = 131;
  v6 = *a2;
  v18 = 0LL;
  v19 = 0LL;
  v7 = xxxCopyDdeIn(v6, &v20, &v19, &v18);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
  {
    v7 = 3;
    if ( v18 )
      Win32FreePool(v18);
    return v7;
  }
  if ( v7 == 2 )
  {
    v8 = v18;
    v9 = *((_WORD *)v18 + 36);
    if ( (v9 & 0xA000) == 0 )
    {
      v9 |= 0x2000u;
      *((_WORD *)v18 + 36) = v9;
    }
    if ( (v9 & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v8 + 6)) )
      {
        Win32FreePool(v8);
        return 3LL;
      }
      v12 = GiveObject(
              *((unsigned __int16 *)v8 + 37),
              v10,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 424LL) + 56LL));
      v13 = v20;
      if ( v12 )
        v13 = v20 | 0x4000;
      v14 = v13 | 0x400;
    }
    else
    {
      v15 = AddPublicObject(
              *((unsigned __int16 *)v8 + 37),
              *((void **)v8 + 6),
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 424LL) + 56LL));
      v14 = v20;
      if ( v15 )
        v14 = v20 | 0x2000;
    }
    *a1 |= 0x80000000;
    if ( *((__int16 *)v8 + 36) >= 0 )
    {
      xxxClientFreeDDEHandle(v19, v14 & 0xFFFFFFFE);
      if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
      {
        *a2 = 0LL;
        return 3;
      }
      v17 = Createpxs(0LL, 0LL, 0LL, v8, v14 | 0x200);
      if ( v17 )
      {
        *((_QWORD *)v17 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        v16 = *(void **)v17;
      }
      else
      {
        v16 = 0LL;
      }
    }
    else
    {
      v16 = AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxAdviseDataAck, 0LL, v19, v8, v14);
    }
    *a2 = v16;
    if ( !v16 )
      return 3;
  }
  return v7;
}
