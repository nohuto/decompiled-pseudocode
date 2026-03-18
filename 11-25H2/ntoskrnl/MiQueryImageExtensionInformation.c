/*
 * XREFs of MiQueryImageExtensionInformation @ 0x140479334
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     MiGetImageExtensionBaseAddress @ 0x140A2BA60 (MiGetImageExtensionBaseAddress.c)
 */

__int64 __fastcall MiQueryImageExtensionInformation(__int128 *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // ecx
  int v10; // ebx
  __int64 ImageExtensionBaseAddress; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  ULONG_PTR v14; // rbx
  struct _LIST_ENTRY **p_Blink; // r12
  unsigned __int8 v16; // r13
  __int128 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  int v19; // [rsp+88h] [rbp+10h] BYREF
  int v20; // [rsp+8Ch] [rbp+14h]
  _QWORD *v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v20 = HIDWORD(a2);
  v19 = 0;
  v6 = 0LL;
  v17 = *a1;
  v18 = *((_QWORD *)a1 + 2);
  if ( HIDWORD(*(_QWORD *)a1) )
    goto LABEL_15;
  v7 = MiObtainReferencedVadEx(a3, (unsigned __int8)BYTE4(*(_QWORD *)a1) + 2, &v19);
  v6 = v7;
  if ( !v7 )
  {
    v10 = v19;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(v7 + 48) & 0x70) != 0x20 )
  {
    v10 = -1073741503;
    goto LABEL_9;
  }
  v8 = 3;
  if ( (_DWORD)v17 )
  {
    if ( (_DWORD)v17 == 1 )
    {
      v10 = -1073741637;
      goto LABEL_9;
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v8 == 3 )
  {
LABEL_15:
    v10 = -1073741811;
    goto LABEL_9;
  }
  *((_QWORD *)&v17 + 1) = 0LL;
  v18 = 0LL;
  if ( (*(_DWORD *)(v7 + 64) & 0x20) != 0 )
  {
    ImageExtensionBaseAddress = MiGetImageExtensionBaseAddress(v7);
    v13 = (unsigned int)dword_140E2D560[v12] + ImageExtensionBaseAddress;
    v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    v16 = MiLockWorkingSetShared((__int64)p_Blink);
    MiMakeSystemAddressValid(v14, (*(_DWORD *)(v6 + 48) >> 12) & 0x7F, v16, 0);
    if ( *(_QWORD *)v14 )
    {
      *((_QWORD *)&v17 + 1) = v13
                            - ((*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12);
      v18 = 4096LL;
    }
    MiUnlockPageTable((__int64)p_Blink, ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiUnlockWorkingSetShared((__int64)p_Blink, v16);
  }
  v10 = 0;
LABEL_9:
  if ( v6 )
    MiUnlockAndDereferenceVadShared((PVOID)v6);
  if ( v10 >= 0 )
  {
    *a1 = v17;
    *((_QWORD *)a1 + 2) = v18;
    if ( a4 )
      *a4 = 24LL;
  }
  return (unsigned int)v10;
}
