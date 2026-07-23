/*
 * XREFs of MiZeroNodeConductorWait @ 0x1406911A8
 * Callers:
 *     MiZeroNodeExiting @ 0x1406912C4 (MiZeroNodeExiting.c)
 *     MiNodeZeroConductor @ 0x1407FFF00 (MiNodeZeroConductor.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     MiDeleteThreadContext @ 0x140690714 (MiDeleteThreadContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiZeroNodeConductorWait(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // esi
  ULONG v6; // r10d
  __int128 *v7; // rdi
  struct _KWAIT_BLOCK *WaitBlockArray; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // ebp
  __int128 v13; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-C8h]
  char v15; // [rsp+60h] [rbp-B8h] BYREF

  v14 = 0LL;
  v3 = *(unsigned int *)(a1 + 60);
  v13 = 0LL;
  while ( 1 )
  {
    v5 = *(_BYTE *)(a1 + 81) == 0 ? 3 : 0;
    v6 = v5;
    if ( (_DWORD)v3 )
    {
      v7 = *(__int128 **)(a1 + 72);
      v6 = v3 + v5;
      WaitBlockArray = (struct _KWAIT_BLOCK *)((char *)v7 + 8 * v3 + 24);
    }
    else
    {
      v7 = &v13;
      WaitBlockArray = (struct _KWAIT_BLOCK *)&v15;
    }
    if ( *(_BYTE *)(a1 + 81) )
    {
      v7 = (__int128 *)((char *)v7 + 24);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 48);
      *((_QWORD *)v7 + 2) = a1;
      *(_QWORD *)v7 = v9 + 88;
      *((_QWORD *)v7 + 1) = a1 + 88;
    }
    v10 = KeWaitForMultipleObjects(v6, (PVOID *)v7, WaitAny, WrFreePage, 0, 0, a2, WaitBlockArray);
    v11 = v10;
    if ( v10 < v5 )
      break;
    if ( v10 >= v5 + *(_DWORD *)(a1 + 60) )
      break;
    MiDeleteThreadContext(a1, *((void **)v7 + v10));
    v3 = *(unsigned int *)(a1 + 60);
    if ( !(_DWORD)v3 )
    {
      if ( *(_BYTE *)(a1 + 81) )
        break;
    }
  }
  return v11;
}
