/*
 * XREFs of HeadlessInit @ 0x140C442D4
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmLockPagableDataSection @ 0x140A54770 (MmLockPagableDataSection.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     HdlspEnableTerminal @ 0x140BAF9D4 (HdlspEnableTerminal.c)
 */

void __fastcall HeadlessInit(__int64 a1)
{
  char *v2; // rdi
  __int64 Pool2; // rax
  __int64 v4; // rbx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  char v10; // al
  char v11; // dl
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  PVOID v16; // rax
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  _DWORD v20[2]; // [rsp+20h] [rbp-128h] BYREF
  __int16 v21; // [rsp+28h] [rbp-120h]
  __int16 v22; // [rsp+2Ah] [rbp-11Eh]
  __int16 v23; // [rsp+2Ch] [rbp-11Ch]
  __int16 v24; // [rsp+2Eh] [rbp-11Ah]
  char v25; // [rsp+30h] [rbp-118h]
  char v26; // [rsp+33h] [rbp-115h]

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
          memset_0(v20, 0, 0x110uLL);
          v10 = *v2;
          v11 = v2[33];
          v24 = -1;
          v26 = v10;
          v23 = *((_WORD *)v2 + 12);
          v22 = *((_WORD *)v2 + 13);
          v20[0] = (unsigned __int8)v2[28];
          v21 = *((_WORD *)v2 + 15);
          v12 = v2[32] & 0x1F | (32 * (v11 & 7));
          v25 = -1;
          v20[1] = v12;
          guard_dispatch_icall_no_overrides(a1, v20);
        }
      }
      v13 = ExAllocatePool2(0x40uLL, 0x3800uLL, 0x736C6448uLL);
      *(_QWORD *)(v4 + 16) = v13;
      if ( v13
        && (*(_DWORD *)(v4 + 96) = -1,
            v14 = ExAllocatePool2(0x40uLL, 0x50uLL, 0x736C6448uLL),
            (*(_QWORD *)(v4 + 24) = v14) != 0LL)
        && (v15 = ExAllocatePool2(0x40uLL, 0x50uLL, 0x736C6448uLL), (*(_QWORD *)(v4 + 32) = v15) != 0LL)
        && (v16 = MmLockPagableDataSection(HdlspDispatch), (*(_QWORD *)(v4 + 8) = v16) != 0LL) )
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
        v17 = *(void **)(v4 + 16);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        v18 = *(void **)(v4 + 24);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        v19 = *(void **)(v4 + 32);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        ExFreePoolWithTag((PVOID)v4, 0);
      }
    }
  }
}
