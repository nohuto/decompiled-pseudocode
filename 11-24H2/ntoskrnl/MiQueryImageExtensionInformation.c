/*
 * XREFs of MiQueryImageExtensionInformation @ 0x140474954
 * Callers:
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiGetImageExtensionBaseAddress @ 0x140A2C0F0 (MiGetImageExtensionBaseAddress.c)
 */

__int64 __fastcall MiQueryImageExtensionInformation(__int128 *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
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
  unsigned __int8 v17; // r13
  __int128 v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+38h] [rbp-40h]
  int v20; // [rsp+88h] [rbp+10h] BYREF
  int v21; // [rsp+8Ch] [rbp+14h]
  _QWORD *v22; // [rsp+98h] [rbp+20h]

  v22 = a4;
  v21 = HIDWORD(a2);
  v5 = a3;
  v20 = 0;
  v7 = 0LL;
  v18 = *a1;
  v19 = *((_QWORD *)a1 + 2);
  if ( HIDWORD(*(_QWORD *)a1) )
    goto LABEL_15;
  v8 = MiObtainReferencedVadEx(a3, (unsigned int)(HIDWORD(*(_QWORD *)a1) + 2), &v20);
  v7 = v8;
  if ( !v8 )
  {
    v11 = v20;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(v8 + 48) & 0x70) != 0x20 )
  {
    v11 = -1073741503;
    goto LABEL_9;
  }
  a2 = 3LL;
  v9 = 3;
  if ( (_DWORD)v18 )
  {
    a3 = 3LL;
    if ( (_DWORD)v18 == 1 )
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
  *((_QWORD *)&v18 + 1) = 0LL;
  v19 = 0LL;
  if ( (*(_DWORD *)(v8 + 64) & 0x20) != 0 )
  {
    ImageExtensionBaseAddress = MiGetImageExtensionBaseAddress(v8, 3LL, a3);
    v14 = (unsigned int)dword_140E2D7A0[v13] + ImageExtensionBaseAddress;
    v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    v17 = MiLockWorkingSetShared((__int64)p_Blink);
    MiMakeSystemAddressValid(v15, (*(_DWORD *)(v7 + 48) >> 12) & 0x7F, v17, 0);
    if ( *(_QWORD *)v15 )
    {
      *((_QWORD *)&v18 + 1) = v14
                            - ((*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12);
      v19 = 4096LL;
    }
    MiUnlockPageTableInternal((__int64)p_Blink, ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiUnlockWorkingSetShared((__int64)p_Blink, v17);
  }
  v11 = 0;
LABEL_9:
  if ( v7 )
    MiUnlockAndDereferenceVadShared(v7, a2, a3, v5);
  if ( v11 >= 0 )
  {
    *a1 = v18;
    *((_QWORD *)a1 + 2) = v19;
    if ( a4 )
      *a4 = 24LL;
  }
  return (unsigned int)v11;
}
