/*
 * XREFs of HalpInitGenericErrorSourceEntry @ 0x140B3DCD8
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140B3E2D4 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x1402AA7A0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140413F40 (MmMapIoSpaceEx.c)
 *     RtlStringCchCopyA @ 0x1404577B8 (RtlStringCchCopyA.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpInitGenericErrorSourceEntry(__int64 a1, __int64 *a2)
{
  unsigned int v4; // esi
  __int64 Pool2; // rdi
  __int64 v6; // rax
  int v7; // r14d
  _DWORD *v8; // rax
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int128 v13; // xmm1
  _DWORD Src[8]; // [rsp+20h] [rbp-60h] BYREF
  char pszDest[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+50h] [rbp-30h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]

  v4 = 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(Pool2 + 40) = MmMapIoSpaceEx(*(_QWORD *)(a1 + 56), 8LL, 0x204u);
    v6 = *(_QWORD *)(a1 + 56);
    Src[3] = 0;
    v18 = v6;
    v19 = *(unsigned int *)(a1 + 44);
    *(_OWORD *)pszDest = 0LL;
    v17 = 0LL;
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = 80;
    Src[5] = -2147483615;
    Src[4] = 1280201291;
    Src[6] = 2;
    Src[7] = 48;
    RtlStringCchCopyA(pszDest, 0x20uLL, "Error_Status_block_register");
    WheaLogInternalEvent(Src);
    if ( *(_QWORD *)(Pool2 + 40)
      && (v7 = *(_DWORD *)(a1 + 16) + 80 + *(_DWORD *)(Pool2 + 48),
          v8 = (_DWORD *)ExAllocatePool2(0x40uLL),
          (*(_QWORD *)(Pool2 + 24) = v8) != 0LL) )
    {
      *v8 = 1095059543;
      v11 = Pool2 + 88;
      v12 = 7LL;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 4LL) = 3;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 8LL) = v7;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 16LL) = 6;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 24LL) = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 28LL) = 5;
      *(GUID *)(*(_QWORD *)(Pool2 + 24) + 32LL) = GENERIC_NOTIFY_TYPE_GUID;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 56LL) = 7;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 64LL) = 80;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 68LL) = *(_DWORD *)(Pool2 + 48);
      do
      {
        *(_OWORD *)v11 = *(_OWORD *)a1;
        *(_OWORD *)(v11 + 16) = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v11 + 32) = *(_OWORD *)(a1 + 32);
        *(_OWORD *)(v11 + 48) = *(_OWORD *)(a1 + 48);
        *(_OWORD *)(v11 + 64) = *(_OWORD *)(a1 + 64);
        *(_OWORD *)(v11 + 80) = *(_OWORD *)(a1 + 80);
        *(_OWORD *)(v11 + 96) = *(_OWORD *)(a1 + 96);
        v11 += 128LL;
        v13 = *(_OWORD *)(a1 + 112);
        a1 += 128LL;
        *(_OWORD *)(v11 - 16) = v13;
        --v12;
      }
      while ( v12 );
      *(_OWORD *)v11 = *(_OWORD *)a1;
      *(_OWORD *)(v11 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(v11 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(v11 + 48) = *(_OWORD *)(a1 + 48);
      *(_QWORD *)(v11 + 64) = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(v11 + 72) = *(_DWORD *)(a1 + 72);
    }
    else
    {
      v9 = *(void **)(Pool2 + 40);
      v4 = -1073741670;
      if ( v9 )
        MmUnmapIoSpace(v9, 8uLL);
      v10 = *(void **)(Pool2 + 24);
      if ( v10 )
        ExFreePoolWithTag(v10, 0x576C6148u);
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
