/*
 * XREFs of ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FA2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01F8EBC (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F8F78 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F902C (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01F9108 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01F916C (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01F91C0 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F92C4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F969C (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F9A50 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F9BDC (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FA680 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientGetDDEFlags @ 0x1C0211F6C (xxxClientGetDDEFlags.c)
 */

int __fastcall xxxRequestAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  int v3; // r14d
  unsigned int v5; // ecx
  unsigned int v8; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int16 v12; // bx
  int v13; // ebx
  struct tagINTDDEINFO *v14; // r15
  __int16 v15; // ax
  void *v16; // rdx
  int v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // edi
  int v20; // eax
  void *v21; // rax
  struct tagXSTATE *v22; // rax
  struct tagXSTATE *v23; // rdx
  int v24; // ebx
  struct tagINTDDEINFO *v25; // [rsp+30h] [rbp-10h] BYREF
  void *v26; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v27; // [rsp+80h] [rbp+40h] BYREF
  int DDEFlags; // [rsp+98h] [rbp+58h]

  v3 = 0;
  v5 = *a1;
  v25 = 0LL;
  v26 = 0LL;
  v8 = v5 - 996;
  if ( v8 )
  {
    if ( v8 != 1 )
      return xxxUnexpectedServerPost(a1, a2, a3);
    v10 = *a2;
    v11 = *((_QWORD *)a3 + 7);
    v27 = 131;
    DDEFlags = xxxClientGetDDEFlags(v10);
    v12 = DDEFlags;
    if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 || *((_QWORD *)a3 + 7) != v11 )
      return 3;
    if ( (v12 & 0x1000) == 0 )
      return xxxAdviseData(a1, (void **)a2, a3);
    v13 = xxxCopyDdeIn((void *)*a2, &v27, &v26, &v25);
    if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 || *((_QWORD *)a3 + 7) != v11 )
    {
      v13 = 3;
      if ( v25 )
        Win32FreePool(v25);
    }
    else if ( v13 == 2 )
    {
      v14 = v25;
      v15 = *((_WORD *)v25 + 36);
      if ( (v15 & 0xA000) == 0 )
        *((_WORD *)v25 + 36) = v15 | 0x2000;
      if ( (DDEFlags & 0x2000) != 0 )
      {
        if ( IsObjectPublic(*((void **)v14 + 6)) )
        {
          Win32FreePool(v14);
          return 3;
        }
        v17 = GiveObject(
                *((unsigned __int16 *)v14 + 37),
                v16,
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 424LL) + 56LL));
        v18 = v27;
        if ( v17 )
          v18 = v27 | 0x4000;
        v19 = v18 | 0x400;
      }
      else
      {
        v20 = AddPublicObject(
                *((unsigned __int16 *)v14 + 37),
                *((void **)v14 + 6),
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 424LL) + 56LL));
        v19 = v27;
        if ( v20 )
          v19 = v27 | 0x2000;
      }
      *a1 |= 0x80000000;
      if ( (DDEFlags & 0x8000) != 0 )
      {
        v21 = AnticipatePost(
                *((struct tagDDECONV **)a3 + 4),
                (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxAdviseDataAck,
                0LL,
                v26,
                v14,
                v19);
      }
      else
      {
        FreeListAdd(a3, v26, v19 & 0xFFFFFFFE);
        v22 = Createpxs(0LL, 0LL, 0LL, v14, v19 | 0x200);
        v23 = v22;
        if ( v22 )
        {
          v21 = *(void **)v22;
          *((_QWORD *)v23 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        }
        else
        {
          v21 = 0LL;
        }
      }
      *a2 = (__int64)v21;
      if ( v21 )
        PopState(a3);
      else
        return 3;
    }
    return v13;
  }
  else
  {
    v24 = xxxCopyAckIn(a1, (void **)a2, a3, &v25);
    if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) == 0 && (v3 = v24, v24 == 2) )
    {
      PopState(a3);
      return 2;
    }
    else
    {
      return v3;
    }
  }
}
