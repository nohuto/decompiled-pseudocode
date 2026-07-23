/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x140C5F964
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BA5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140468D2C (BgpFwAllocateMemory.c)
 *     RtlUShortAdd @ 0x140472A24 (RtlUShortAdd.c)
 *     BcpGetMaxResourceProfile @ 0x14068EAB0 (BcpGetMaxResourceProfile.c)
 *     BcpGetProgressMessages @ 0x14068EB70 (BcpGetProgressMessages.c)
 *     Feature_50070238__private_IsEnabledDeviceUsageNoInline @ 0x14068F85C (Feature_50070238__private_IsEnabledDeviceUsageNoInline.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140BA0834 (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x140BA0860 (BgpDisplayCharacterGetContext.c)
 *     BgpFoDetermineFontInformation @ 0x140C5EAEC (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x140C5F7A4 (BcpFindMessage.c)
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
    dword_140EEFD90 |= 0x400000u;
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
      RtlInitUnicodeString(&stru_140E3E740, Message);
      v8 = BcpFindMessage(0xC1008008);
      RtlInitUnicodeString(&stru_140E3E760, v8);
      v9 = BcpFindMessage(0x41008009u);
      RtlInitUnicodeString(&stru_140E3E770, v9);
      v10 = BcpFindMessage(0x41008010u);
      RtlInitUnicodeString(&usAddend, v10);
      v11 = BcpFindMessage(0x41008011u);
      RtlInitUnicodeString(&stru_140E3E790, v11);
      if ( !FeatureEnabledBsodRejuvenation )
        goto LABEL_62;
      Length = stru_140E3E790.Length;
      if ( stru_140E3E770.Length >= stru_140E3E790.Length )
        Length = stru_140E3E770.Length;
      if ( Length < usAddend.Length )
        Length = usAddend.Length;
      if ( RtlUShortAdd(stru_140E3E740.Length, Length, &pusResult) >= 0 && RtlUShortAdd(pusResult, 4u, v13) >= 0 )
      {
        qword_140E3E8A0 = BgpFwAllocateMemory(pusResult);
        if ( qword_140E3E8A0 )
        {
LABEL_62:
          v14 = BcpFindMessage(0xC1008003);
          RtlInitUnicodeString(&stru_140E3E750, v14);
          v15 = BcpFindMessage(0x41008014u);
          RtlInitUnicodeString(&stru_140E3E7E0, v15);
          v16 = BcpFindMessage(0x41008015u);
          RtlInitUnicodeString(&stru_140E3E7F0, v16);
          v17 = BcpFindMessage(0x41008016u);
          RtlInitUnicodeString(&stru_140E3E800, v17);
          v18 = BcpFindMessage(0x41008018u);
          RtlInitUnicodeString(&stru_140E3E810, v18);
          v19 = BcpFindMessage(0x41008017u);
          RtlInitUnicodeString(&stru_140E3E820, v19);
          v20 = BcpFindMessage(0x41008019u);
          RtlInitUnicodeString(&stru_140E3E830, v20);
          v21 = BcpFindMessage(0x41008020u);
          RtlInitUnicodeString(&stru_140E3E840, v21);
          if ( !FeatureEnabledBsodRejuvenation
            || RtlUShortAdd(stru_140E3E830.Length, stru_140E3E840.Length, &word_140E3E898) >= 0
            && RtlUShortAdd(word_140E3E898, 4u, v22) >= 0
            && (qword_140E3E890 = BgpFwAllocateMemory(word_140E3E898)) != 0 )
          {
            v23 = BcpFindMessage(0x41008021u);
            RtlInitUnicodeString(&stru_140E3E850, v23);
            if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v43) >= 0 )
            {
              RtlInitUnicodeString(&stru_140E3E7A0, SourceString);
              RtlInitUnicodeString(&stru_140E3E7B0, v43);
              ProgressMessages = BcpGetProgressMessages(3238035475LL, &v45, &v43);
              v6 = v45;
              if ( ProgressMessages >= 0 )
              {
                RtlInitUnicodeString(&stru_140E3E7C0, v45);
                RtlInitUnicodeString(&stru_140E3E7D0, v43);
                if ( !FeatureEnabledBsodRejuvenation
                  || RtlUShortAdd(stru_140E3E7A0.Length, stru_140E3E7B0.Length, &word_140E3E878) >= 0
                  && RtlUShortAdd(word_140E3E878, stru_140E3E7C0.Length, v25) >= 0
                  && RtlUShortAdd(word_140E3E878, stru_140E3E7D0.Length, v26) >= 0
                  && RtlUShortAdd(word_140E3E878, 8u, v27) >= 0
                  && (qword_140E3E870 = BgpFwAllocateMemory(word_140E3E878)) != 0
                  && (qword_140E3E868 = BgpFwAllocateMemory(0x400uLL)) != 0
                  && RtlUShortAdd(stru_140E3E7E0.Length, 4u, &word_140E3E888) >= 0
                  && RtlUShortAdd(word_140E3E888, 0x100u, v28) >= 0
                  && (qword_140E3E880 = BgpFwAllocateMemory(word_140E3E888)) != 0 )
                {
                  if ( *BcpFindMessage(0x41008006u) == 48 )
                    dword_140EEFD90 |= 0x20000u;
                  if ( (*(_DWORD *)(a1 + 120) & 0x10000000) != 0 )
                    v41[0] = -14389468;
                  else
                    v41[0] = FeatureEnabledBsodRejuvenation != 0 ? -16777216 : -16761454;
                  v41[1] = -1;
                  v31 = (unsigned int *)&unk_140E0ECC0;
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
                      if ( (__int64)v31 < (__int64)&dword_140E0EE64 )
                        goto LABEL_36;
                      HIDWORD(v42) = 0;
                      if ( (int)BcpGetMaxResourceProfile((__int128 *)v41, (unsigned __int64 *)&v40) >= 0 )
                      {
                        v34 = v40;
                        Memory = BgpFwAllocateMemory(v40);
                        if ( Memory )
                        {
                          qword_140EEFCD0 = 0LL;
                          BcpWorkspace = Memory;
                          v38 = __PAIR64__(HIDWORD(v37), DWORD2(v40));
                          qword_140EEFCC8 = v34;
                          qword_140E3E860 = BgpDisplayCharacterGetContext((__int64)v41, (int *)&v38, 3);
                          if ( qword_140E3E860 )
                          {
                            dword_140EEFD90 |= 0x10u;
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
        if ( qword_140E3E890 )
          BgpFwFreeMemory(qword_140E3E890);
        if ( qword_140E3E870 )
          BgpFwFreeMemory(qword_140E3E870);
        if ( qword_140E3E868 )
          BgpFwFreeMemory(qword_140E3E868);
        if ( qword_140E3E880 )
          BgpFwFreeMemory(qword_140E3E880);
      }
      if ( qword_140E3E860 )
        BgpDisplayCharacterDestroyContext(qword_140E3E860);
    }
  }
  return 0LL;
}
