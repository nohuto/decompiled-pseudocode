/*
 * XREFs of RaidCaptureLiveDump @ 0x140042C58
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0quuujjzssszqqd_EtwWriteTransfer @ 0x1400873C4 (McTemplateK0quuujjzssszqqd_EtwWriteTransfer.c)
 *     RaCaptureLiveDumpAllowed @ 0x140089C28 (RaCaptureLiveDumpAllowed.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidCaptureLiveDump(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // r14
  bool v5; // zf
  __int64 v8; // rsi
  __int64 v9; // r8
  int v10; // r10d
  __int64 v11; // r11
  unsigned int v12; // esi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // r11
  int v17; // ecx
  void *v18; // rax
  const wchar_t *v19; // r8
  const wchar_t *v20; // rdx
  const wchar_t *v21; // rdi
  int v23; // [rsp+90h] [rbp-68h]
  __int128 v24; // [rsp+98h] [rbp-60h] BYREF
  __int128 v25; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v26; // [rsp+B8h] [rbp-40h] BYREF

  LOBYTE(v3) = RaidNullAddress;
  LOBYTE(v4) = 0;
  v23 = RaidNullAddress;
  v5 = *(_DWORD *)a3 == 40;
  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  if ( v5
    && *(_DWORD *)(a3 + 4) == 40
    && *(_QWORD *)(a3 + 32)
    && (v8 = *(_QWORD *)(a3 + 16)) != 0
    && *(_DWORD *)(a3 + 24) == 1
    && (unsigned int)(*(_DWORD *)(a3 + 8) - 1) <= 1 )
  {
    if ( (unsigned __int8)RaCaptureLiveDumpAllowed() )
    {
      v4 = *(int *)(v9 + 12);
      v13 = 0;
      if ( v10 == 1 )
        v13 = 2;
      if ( a2 )
        v14 = 0LL;
      else
        v14 = *(unsigned __int16 *)(a1 + 4736);
      v12 = DbgkWerCaptureLiveKernelDump(v8, 481LL, 1LL, v4, v14, v11, v9, RaidCaptureLiveDumpCallBack, v13);
    }
    else
    {
      v12 = -1073741823;
    }
  }
  else
  {
    v12 = -1073741811;
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( a2 )
    {
      v3 = *(_DWORD *)(a2 + 104);
      v23 = v3;
      v26 = *(_OWORD *)(a2 + 2104);
    }
    v15 = *(_QWORD *)(a1 + 16);
    v25 = *(_OWORD *)(a1 + 5064);
    RaidDriverGetName(v15, (__int64)&v24);
    if ( (byte_140171466 & 8) != 0 )
    {
      if ( a2 )
        v17 = 0;
      else
        v17 = *(unsigned __int16 *)(a1 + 4736);
      v18 = &unk_140151214;
      if ( v16 )
        v18 = v16;
      if ( a2 )
      {
        v19 = (const wchar_t *)(a2 + 242);
        v20 = (const wchar_t *)(a2 + 177);
        v21 = (const wchar_t *)(a2 + 168);
      }
      else
      {
        v21 = &word_140150F48;
        v19 = &word_140150F48;
        v20 = &word_140150F48;
      }
      McTemplateK0quuujjzssszqqd_EtwWriteTransfer(
        v17,
        (_DWORD)v20,
        (_DWORD)v19,
        *(_DWORD *)(a1 + 56),
        v3,
        SBYTE1(v23),
        SBYTE2(v23),
        (__int64)&v26,
        (__int64)&v25,
        *((__int64 *)&v24 + 1),
        (__int64)v21,
        (__int64)v20,
        (__int64)v19,
        (__int64)v18,
        v17,
        v4,
        v12);
    }
  }
  return v12;
}
