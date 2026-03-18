/*
 * XREFs of HeadlessInit @ 0x140C42184
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MmLockPagableDataSection @ 0x140A5CF50 (MmLockPagableDataSection.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     HdlspEnableTerminal @ 0x140BAD9D4 (HdlspEnableTerminal.c)
 */

void __fastcall HeadlessInit(__int64 a1)
{
  char *v2; // rdi
  ULONG_PTR Pool2; // rax
  ULONG_PTR v4; // rbx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  char v10; // al
  char v11; // dl
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR v15; // rax
  ULONG_PTR v16; // rax
  ULONG_PTR v17; // rax
  PVOID v18; // rax
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  _DWORD v22[2]; // [rsp+20h] [rbp-128h] BYREF
  __int16 v23; // [rsp+28h] [rbp-120h]
  __int16 v24; // [rsp+2Ah] [rbp-11Eh]
  __int16 v25; // [rsp+2Ch] [rbp-11Ch]
  __int16 v26; // [rsp+2Eh] [rbp-11Ah]
  char v27; // [rsp+30h] [rbp-118h]
  char v28; // [rsp+33h] [rbp-115h]

  v2 = *(char **)(*(_QWORD *)(a1 + 240) + 48LL);
  if ( v2 && (*((_DWORD *)v2 + 2) <= 4u || *v2) )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 0x88uLL, 0x736C6448uLL);
    v4 = Pool2;
    if ( Pool2 )
    {
      v5 = *(_DWORD *)(Pool2 + 48);
      *(_QWORD *)Pool2 = 0LL;
      v6 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v2 + 2) << 9)) & 0xE00;
      *(_DWORD *)(Pool2 + 48) = v6;
      *(_QWORD *)(Pool2 + 64) = *((_QWORD *)v2 + 2);
      *(_DWORD *)(Pool2 + 52) = *((_DWORD *)v2 + 1);
      v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v2[3] << 7)) & 0x80;
      *(_DWORD *)(v4 + 48) = v7;
      v8 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)((unsigned __int8)v2[2] << 8)) & 0x100;
      *(_DWORD *)(v4 + 48) = v8;
      v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(8 * *v2)) & 8;
      *(_DWORD *)(v4 + 48) = v9;
      LOBYTE(v8) = v2[56];
      *(_BYTE *)(v4 + 116) = v8;
      *(_BYTE *)(v4 + 117) = 0;
      *(_BYTE *)(v4 + 84) = v2[57];
      *(_BYTE *)(v4 + 85) = v2[58];
      *(_BYTE *)(v4 + 86) = v2[59];
      *(_BYTE *)(v4 + 87) = v2[60];
      *(_OWORD *)(v4 + 100) = *(_OWORD *)(v2 + 40);
      if ( (_BYTE)v8 )
      {
        v9 |= 0x1000u;
        *(_DWORD *)(v4 + 48) = v9;
      }
      *(_BYTE *)(v4 + 118) = 1;
      *(_BYTE *)(v4 + 119) = v2[36] & 1;
      *(_WORD *)(v4 + 120) = *((_WORD *)v2 + 13);
      *(_WORD *)(v4 + 122) = *((_WORD *)v2 + 12);
      *(_WORD *)(v4 + 124) = *((_WORD *)v2 + 15);
      *(_BYTE *)(v4 + 126) = v2[28];
      *(_BYTE *)(v4 + 127) = v2[32];
      *(_BYTE *)(v4 + 128) = v2[33];
      if ( (unsigned __int16)(*((_WORD *)v2 + 12) - 1) <= 0xFFFDu
        && (unsigned __int16)(*((_WORD *)v2 + 13) - 1) <= 0xFFFDu )
      {
        *(_DWORD *)(v4 + 48) = v9 | 0x1000;
        if ( (*((_DWORD *)v2 + 9) & 1) == 0 )
        {
          memset_0(v22, 0, 0x110uLL);
          v10 = *v2;
          v11 = v2[33];
          v26 = -1;
          v28 = v10;
          v25 = *((_WORD *)v2 + 12);
          v24 = *((_WORD *)v2 + 13);
          v22[0] = (unsigned __int8)v2[28];
          v23 = *((_WORD *)v2 + 15);
          v12 = v2[32] & 0x1F | (32 * (v11 & 7));
          v27 = -1;
          v22[1] = v12;
          guard_dispatch_icall_no_overrides(a1, v22, v13, v14);
        }
      }
      v15 = ExAllocatePool2(0x40uLL, 0x3800uLL, 0x736C6448uLL);
      *(_QWORD *)(v4 + 16) = v15;
      if ( v15
        && (*(_DWORD *)(v4 + 96) = -1,
            v16 = ExAllocatePool2(0x40uLL, 0x50uLL, 0x736C6448uLL),
            (*(_QWORD *)(v4 + 24) = v16) != 0LL)
        && (v17 = ExAllocatePool2(0x40uLL, 0x50uLL, 0x736C6448uLL), (*(_QWORD *)(v4 + 32) = v17) != 0LL)
        && (v18 = MmLockPagableDataSection(HdlspDispatch), (*(_QWORD *)(v4 + 8) = v18) != 0LL) )
      {
        if ( *(_DWORD *)(v4 + 52) == 9600 )
        {
          *(_DWORD *)(v4 + 76) = -1;
          *(_DWORD *)(v4 + 80) = 1301;
          *(_DWORD *)(v4 + 72) = -13010;
        }
        HeadlessGlobals = (PKSPIN_LOCK)v4;
        HdlspEnableTerminal(1);
      }
      else
      {
        v19 = *(void **)(v4 + 16);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        v20 = *(void **)(v4 + 24);
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        v21 = *(void **)(v4 + 32);
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        ExFreePoolWithTag((PVOID)v4, 0);
      }
    }
  }
}
