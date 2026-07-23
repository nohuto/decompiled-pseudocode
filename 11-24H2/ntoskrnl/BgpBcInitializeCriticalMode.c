/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x140C72EA4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     RtlUShortAdd @ 0x140463CC0 (RtlUShortAdd.c)
 *     BcpGetMaxResourceProfile @ 0x14069AE80 (BcpGetMaxResourceProfile.c)
 *     BcpGetProgressMessages @ 0x14069AF40 (BcpGetProgressMessages.c)
 *     Feature_50070238__private_IsEnabledDeviceUsageNoInline @ 0x14069BC2C (Feature_50070238__private_IsEnabledDeviceUsageNoInline.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140BB2834 (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x140BB2860 (BgpDisplayCharacterGetContext.c)
 *     BgpFoDetermineFontInformation @ 0x140C7202C (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x140C72CE4 (BcpFindMessage.c)
 */

__int64 __fastcall BgpBcInitializeCriticalMode(__int64 a1, int a2)
{
  bool v4; // zf
  int v5; // eax
  PCWSTR v6; // rbx
  const wchar_t *Message; // rax
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  USHORT Length; // dx
  USHORT *v13; // r8
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  USHORT *v22; // r8
  const wchar_t *v23; // rax
  int ProgressMessages; // eax
  USHORT *v25; // r8
  USHORT *v26; // r8
  USHORT *v27; // r8
  USHORT *v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int *v31; // rdi
  __int64 v32; // r14
  unsigned int *v33; // rsi
  __int64 v34; // rdi
  __int64 Memory; // rax
  __int64 v37; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-38h] BYREF
  int v39; // [rsp+40h] [rbp-30h]
  __int128 v40; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v41[2]; // [rsp+58h] [rbp-18h] BYREF
  __int128 v42; // [rsp+60h] [rbp-10h] BYREF
  PCWSTR v43; // [rsp+A0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+40h] BYREF
  PCWSTR v45; // [rsp+B8h] [rbp+48h] BYREF

  v37 = 0LL;
  v43 = 0LL;
  v38 = 0LL;
  v39 = 0;
  v40 = 0LL;
  v42 = 0LL;
  v4 = (unsigned int)Feature_50070238__private_IsEnabledDeviceUsageNoInline() == 0;
  v5 = *(_DWORD *)(a1 + 120);
  FeatureEnabledBsodRejuvenation = !v4;
  if ( (v5 & 0x400000) != 0 )
  {
    dword_140EF0270 |= 0x400000u;
  }
  else
  {
    if ( (v5 & 0x2000000) != 0 )
      BcpDisplayParameters = 1;
    v6 = 0LL;
    SourceString = 0LL;
    v45 = 0LL;
    if ( a2 != -1 )
    {
      Message = BcpFindMessage(0xC1008001);
      RtlInitUnicodeString(&stru_140E3EAC0, Message);
      v8 = BcpFindMessage(0xC1008008);
      RtlInitUnicodeString(&stru_140E3EAE0, v8);
      v9 = BcpFindMessage(0x41008009u);
      RtlInitUnicodeString(&stru_140E3EAF0, v9);
      v10 = BcpFindMessage(0x41008010u);
      RtlInitUnicodeString(&usAddend, v10);
      v11 = BcpFindMessage(0x41008011u);
      RtlInitUnicodeString(&stru_140E3EB10, v11);
      if ( !FeatureEnabledBsodRejuvenation )
        goto LABEL_62;
      Length = stru_140E3EB10.Length;
      if ( stru_140E3EAF0.Length >= stru_140E3EB10.Length )
        Length = stru_140E3EAF0.Length;
      if ( Length < usAddend.Length )
        Length = usAddend.Length;
      if ( RtlUShortAdd(stru_140E3EAC0.Length, Length, &pusResult) >= 0 && RtlUShortAdd(pusResult, 4u, v13) >= 0 )
      {
        qword_140E3EC20 = BgpFwAllocateMemory(pusResult);
        if ( qword_140E3EC20 )
        {
LABEL_62:
          v14 = BcpFindMessage(0xC1008003);
          RtlInitUnicodeString(&stru_140E3EAD0, v14);
          v15 = BcpFindMessage(0x41008014u);
          RtlInitUnicodeString(&stru_140E3EB60, v15);
          v16 = BcpFindMessage(0x41008015u);
          RtlInitUnicodeString(&stru_140E3EB70, v16);
          v17 = BcpFindMessage(0x41008016u);
          RtlInitUnicodeString(&stru_140E3EB80, v17);
          v18 = BcpFindMessage(0x41008018u);
          RtlInitUnicodeString(&stru_140E3EB90, v18);
          v19 = BcpFindMessage(0x41008017u);
          RtlInitUnicodeString(&stru_140E3EBA0, v19);
          v20 = BcpFindMessage(0x41008019u);
          RtlInitUnicodeString(&stru_140E3EBB0, v20);
          v21 = BcpFindMessage(0x41008020u);
          RtlInitUnicodeString(&stru_140E3EBC0, v21);
          if ( !FeatureEnabledBsodRejuvenation
            || RtlUShortAdd(stru_140E3EBB0.Length, stru_140E3EBC0.Length, &word_140E3EC18) >= 0
            && RtlUShortAdd(word_140E3EC18, 4u, v22) >= 0
            && (qword_140E3EC10 = BgpFwAllocateMemory(word_140E3EC18)) != 0 )
          {
            v23 = BcpFindMessage(0x41008021u);
            RtlInitUnicodeString(&stru_140E3EBD0, v23);
            if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v43) >= 0 )
            {
              RtlInitUnicodeString(&stru_140E3EB20, SourceString);
              RtlInitUnicodeString(&stru_140E3EB30, v43);
              ProgressMessages = BcpGetProgressMessages(3238035475LL, &v45, &v43);
              v6 = v45;
              if ( ProgressMessages >= 0 )
              {
                RtlInitUnicodeString(&stru_140E3EB40, v45);
                RtlInitUnicodeString(&stru_140E3EB50, v43);
                if ( !FeatureEnabledBsodRejuvenation
                  || RtlUShortAdd(stru_140E3EB20.Length, stru_140E3EB30.Length, &word_140E3EBF8) >= 0
                  && RtlUShortAdd(word_140E3EBF8, stru_140E3EB40.Length, v25) >= 0
                  && RtlUShortAdd(word_140E3EBF8, stru_140E3EB50.Length, v26) >= 0
                  && RtlUShortAdd(word_140E3EBF8, 8u, v27) >= 0
                  && (qword_140E3EBF0 = BgpFwAllocateMemory(word_140E3EBF8)) != 0
                  && (qword_140E3EBE8 = BgpFwAllocateMemory(0x400uLL)) != 0
                  && RtlUShortAdd(stru_140E3EB60.Length, 4u, &word_140E3EC08) >= 0
                  && RtlUShortAdd(word_140E3EC08, 0x100u, v28) >= 0
                  && (qword_140E3EC00 = BgpFwAllocateMemory(word_140E3EC08)) != 0 )
                {
                  if ( *BcpFindMessage(0x41008006u) == 48 )
                    dword_140EF0270 |= 0x20000u;
                  if ( (*(_DWORD *)(a1 + 120) & 0x10000000) != 0 )
                    v41[0] = -14389468;
                  else
                    v41[0] = FeatureEnabledBsodRejuvenation != 0 ? -16777216 : -16761454;
                  v41[1] = -1;
                  v31 = (unsigned int *)&unk_140E0EFA0;
LABEL_36:
                  v32 = 0LL;
                  v33 = v31;
                  while ( (int)BgpFoDetermineFontInformation(
                                 *v33,
                                 v29,
                                 v30,
                                 &v37,
                                 (unsigned int *)&v42 + 2,
                                 (__int64 **)&v42) >= 0 )
                  {
                    ++v32;
                    *v33++ = DWORD2(v42);
                    if ( v32 >= 4 )
                    {
                      v31 += 21;
                      if ( (__int64)v31 < (__int64)&dword_140E0F144 )
                        goto LABEL_36;
                      HIDWORD(v42) = 0;
                      if ( (int)BcpGetMaxResourceProfile((__int128 *)v41, (unsigned __int64 *)&v40) >= 0 )
                      {
                        v34 = v40;
                        Memory = BgpFwAllocateMemory(v40);
                        if ( Memory )
                        {
                          qword_140EF01D0 = 0LL;
                          BcpWorkspace = Memory;
                          v38 = __PAIR64__(HIDWORD(v37), DWORD2(v40));
                          qword_140EF01C8 = v34;
                          qword_140E3EBE0 = BgpDisplayCharacterGetContext((__int64)v41, (int *)&v38, 3);
                          if ( qword_140E3EBE0 )
                          {
                            dword_140EF0270 |= 0x10u;
                            return 0LL;
                          }
                        }
                      }
                      break;
                    }
                  }
                }
              }
            }
            if ( SourceString )
              BgpFwFreeMemory((__int64)SourceString);
            if ( v6 )
              BgpFwFreeMemory((__int64)v6);
          }
        }
      }
      if ( FeatureEnabledBsodRejuvenation )
      {
        if ( qword_140E3EC10 )
          BgpFwFreeMemory(qword_140E3EC10);
        if ( qword_140E3EBF0 )
          BgpFwFreeMemory(qword_140E3EBF0);
        if ( qword_140E3EBE8 )
          BgpFwFreeMemory(qword_140E3EBE8);
        if ( qword_140E3EC00 )
          BgpFwFreeMemory(qword_140E3EC00);
      }
      if ( qword_140E3EBE0 )
        BgpDisplayCharacterDestroyContext(qword_140E3EBE0);
    }
  }
  return 0LL;
}
