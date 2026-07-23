/*
 * XREFs of HalpInitGenericErrorSourceEntry @ 0x140B4FD28
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140B50324 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x1402929D0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     RtlStringCchCopyA @ 0x14044D468 (RtlStringCchCopyA.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpInitGenericErrorSourceEntry(__int64 a1, __int64 *a2)
{
  unsigned int v4; // esi
  __int64 Pool2; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // r14d
  _DWORD *v9; // rax
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int128 v14; // xmm1
  _DWORD Src[8]; // [rsp+20h] [rbp-60h] BYREF
  char pszDest[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp-18h]

  v4 = 0;
  Pool2 = ExAllocatePool2(0x40uLL, 0x428uLL, 0x576C6148u);
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(Pool2 + 40) = MmMapIoSpaceEx(*(_QWORD *)(a1 + 56), 8LL, 516LL);
    v6 = *(_QWORD *)(a1 + 56);
    Src[3] = 0;
    v19 = v6;
    v20 = *(unsigned int *)(a1 + 44);
    *(_OWORD *)pszDest = 0LL;
    v18 = 0LL;
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = 80;
    Src[5] = -2147483615;
    Src[4] = 1280201291;
    Src[6] = 2;
    Src[7] = 48;
    RtlStringCchCopyA(pszDest, 0x20uLL, "Error_Status_block_register");
    WheaLogInternalEvent(Src, v7);
    if ( *(_QWORD *)(Pool2 + 40)
      && (v8 = *(_DWORD *)(a1 + 16) + 80 + *(_DWORD *)(Pool2 + 48),
          v9 = (_DWORD *)ExAllocatePool2(0x40uLL, v8, 0x576C6148u),
          (*(_QWORD *)(Pool2 + 24) = v9) != 0LL) )
    {
      *v9 = 1095059543;
      v12 = Pool2 + 88;
      v13 = 7LL;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 4LL) = 3;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 8LL) = v8;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 16LL) = 6;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 24LL) = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 28LL) = 5;
      *(GUID *)(*(_QWORD *)(Pool2 + 24) + 32LL) = GENERIC_NOTIFY_TYPE_GUID;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 56LL) = 7;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 64LL) = 80;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 68LL) = *(_DWORD *)(Pool2 + 48);
      do
      {
        *(_OWORD *)v12 = *(_OWORD *)a1;
        *(_OWORD *)(v12 + 16) = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v12 + 32) = *(_OWORD *)(a1 + 32);
        *(_OWORD *)(v12 + 48) = *(_OWORD *)(a1 + 48);
        *(_OWORD *)(v12 + 64) = *(_OWORD *)(a1 + 64);
        *(_OWORD *)(v12 + 80) = *(_OWORD *)(a1 + 80);
        *(_OWORD *)(v12 + 96) = *(_OWORD *)(a1 + 96);
        v12 += 128LL;
        v14 = *(_OWORD *)(a1 + 112);
        a1 += 128LL;
        *(_OWORD *)(v12 - 16) = v14;
        --v13;
      }
      while ( v13 );
      *(_OWORD *)v12 = *(_OWORD *)a1;
      *(_OWORD *)(v12 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(v12 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(v12 + 48) = *(_OWORD *)(a1 + 48);
      *(_QWORD *)(v12 + 64) = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(v12 + 72) = *(_DWORD *)(a1 + 72);
    }
    else
    {
      v10 = *(void **)(Pool2 + 40);
      v4 = -1073741670;
      if ( v10 )
        MmUnmapIoSpace(v10, 8uLL);
      v11 = *(void **)(Pool2 + 24);
      if ( v11 )
        ExFreePoolWithTag(v11, 0x576C6148u);
      ExFreePoolWithTag((PVOID)Pool2, 0x576C6148u);
      Pool2 = 0LL;
    }
  }
  else
  {
    v4 = -1073741670;
  }
  *a2 = Pool2;
  return v4;
}
