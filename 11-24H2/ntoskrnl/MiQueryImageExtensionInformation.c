/*
 * XREFs of MiQueryImageExtensionInformation @ 0x140470764
 * Callers:
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     MiGetImageExtensionBaseAddress @ 0x140A1FFB0 (MiGetImageExtensionBaseAddress.c)
 */

__int64 __fastcall MiQueryImageExtensionInformation(__int128 *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // r9
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // ecx
  int v11; // ebx
  __int64 ImageExtensionBaseAddress; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // r15
  ULONG_PTR v15; // rbx
  struct _LIST_ENTRY **p_Blink; // r12
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int8 v19; // r13
  __int128 v20; // [rsp+28h] [rbp-50h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  int v22; // [rsp+88h] [rbp+10h] BYREF
  int v23; // [rsp+8Ch] [rbp+14h]
  _QWORD *v24; // [rsp+98h] [rbp+20h]

  v24 = a4;
  v23 = HIDWORD(a2);
  v5 = a3;
  v22 = 0;
  v7 = 0LL;
  v20 = *a1;
  v21 = *((_QWORD *)a1 + 2);
  if ( HIDWORD(*(_QWORD *)a1) )
    goto LABEL_15;
  v8 = MiObtainReferencedVadEx(a3, (unsigned int)(HIDWORD(*(_QWORD *)a1) + 2), &v22, a3);
  v7 = v8;
  if ( !v8 )
  {
    v11 = v22;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(v8 + 48) & 0x70) != 0x20 )
  {
    v11 = -1073741503;
    goto LABEL_9;
  }
  a2 = 3LL;
  v9 = 3;
  if ( (_DWORD)v20 )
  {
    a3 = 3LL;
    if ( (_DWORD)v20 == 1 )
    {
      v11 = -1073741637;
      goto LABEL_9;
    }
  }
  else
  {
    v9 = 0;
    a3 = 0LL;
  }
  if ( v9 == 3 )
  {
LABEL_15:
    v11 = -1073741811;
    goto LABEL_9;
  }
  *((_QWORD *)&v20 + 1) = 0LL;
  v21 = 0LL;
  if ( (*(_DWORD *)(v8 + 64) & 0x20) != 0 )
  {
    ImageExtensionBaseAddress = MiGetImageExtensionBaseAddress(v8, 3LL, a3);
    v14 = (unsigned int)dword_140E2D8E0[v13] + ImageExtensionBaseAddress;
    v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    v19 = MiLockWorkingSetShared((__int64)p_Blink, v17, v13, v18);
    MiMakeSystemAddressValid(v15, (*(_DWORD *)(v7 + 48) >> 12) & 0x7F, v19, 0);
    if ( *(_QWORD *)v15 )
    {
      *((_QWORD *)&v20 + 1) = v14
                            - ((*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12);
      v21 = 4096LL;
    }
    MiUnlockPageTableInternal((__int64)p_Blink, ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiUnlockWorkingSetShared((__int64)p_Blink, v19);
  }
  v11 = 0;
LABEL_9:
  if ( v7 )
    MiUnlockAndDereferenceVadShared(v7, a2, a3, v5);
  if ( v11 >= 0 )
  {
    *a1 = v20;
    *((_QWORD *)a1 + 2) = v21;
    if ( a4 )
      *a4 = 24LL;
  }
  return (unsigned int)v11;
}
