/*
 * XREFs of ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1402AF8DC (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1402AF9BC (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1402AFA70 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1402AFB0C (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1402AFB70 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1402AFBC4 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1402AFCE4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0108 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1402B04D0 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1402B0624 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0FD0 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientGetDDEFlags @ 0x1402BC2BC (xxxClientGetDDEFlags.c)
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
  int v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // edi
  int v19; // eax
  void *v20; // rax
  __int64 v21; // rdx
  struct tagXSTATE *v22; // rax
  int v23; // ebx
  __int64 v24; // rdx
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
    v13 = xxxCopyDdeIn(*a2, &v27, &v26, &v25);
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
        if ( IsObjectPublic(*((void **)v14 + 6), 0x2000LL) )
        {
          Win32FreePool(v14);
          return 3;
        }
        v16 = GiveObject(
                *((unsigned __int16 *)v14 + 37),
                *((void **)v14 + 6),
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 464LL) + 56LL));
        v17 = v27;
        if ( v16 )
          v17 = v27 | 0x4000;
        v18 = v17 | 0x400;
      }
      else
      {
        v19 = AddPublicObject(
                *((unsigned __int16 *)v14 + 37),
                *((void **)v14 + 6),
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 464LL) + 56LL));
        v18 = v27;
        if ( v19 )
          v18 = v27 | 0x2000;
      }
      *a1 |= 0x80000000;
      if ( (DDEFlags & 0x8000) != 0 )
      {
        v20 = AnticipatePost(
                *((struct tagDDECONV **)a3 + 4),
                (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxAdviseDataAck,
                0LL,
                v26,
                v14,
                v18);
      }
      else
      {
        FreeListAdd(a3, v26, v18 & 0xFFFFFFFE);
        v22 = Createpxs(0LL, 0LL, 0LL, v14, v18 | 0x200);
        v21 = (__int64)v22;
        if ( v22 )
        {
          v20 = *(void **)v22;
          *(_QWORD *)(v21 + 16) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        }
        else
        {
          v20 = 0LL;
        }
      }
      *a2 = (__int64)v20;
      if ( v20 )
        PopState(a3, v21);
      else
        return 3;
    }
    return v13;
  }
  else
  {
    v23 = xxxCopyAckIn(a1, (void **)a2, a3, &v25);
    if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) == 0 )
      v3 = v23;
    if ( v3 == 2 )
    {
      PopState(a3, v24);
      return 2;
    }
    else
    {
      return v3;
    }
  }
}
