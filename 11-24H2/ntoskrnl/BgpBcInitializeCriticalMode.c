/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x140C70D44
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     BgpFwAllocateMemory @ 0x140467320 (BgpFwAllocateMemory.c)
 *     RtlUShortAdd @ 0x14046B240 (RtlUShortAdd.c)
 *     BcpGetMaxResourceProfile @ 0x140699E00 (BcpGetMaxResourceProfile.c)
 *     BcpGetProgressMessages @ 0x140699EC0 (BcpGetProgressMessages.c)
 *     Feature_50070238__private_IsEnabledDeviceUsageNoInline @ 0x14069ABAC (Feature_50070238__private_IsEnabledDeviceUsageNoInline.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140BB0834 (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x140BB0860 (BgpDisplayCharacterGetContext.c)
 *     BgpFoDetermineFontInformation @ 0x140C6FECC (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x140C70B84 (BcpFindMessage.c)
 */

__int64 __fastcall BgpBcInitializeCriticalMode(__int64 a1, int a2)
{
  bool v4; // zf
  int v5; // eax
  PCWSTR v6; // rbx
  unsigned __int16 *Message; // rax
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // rax
  USHORT Length; // dx
  USHORT *v13; // r8
  unsigned __int16 *v14; // rax
  unsigned __int16 *v15; // rax
  unsigned __int16 *v16; // rax
  unsigned __int16 *v17; // rax
  unsigned __int16 *v18; // rax
  unsigned __int16 *v19; // rax
  unsigned __int16 *v20; // rax
  unsigned __int16 *v21; // rax
  USHORT *v22; // r8
  unsigned __int16 *v23; // rax
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
    dword_140EF0050 |= 0x400000u;
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
      RtlInitUnicodeString(&stru_140E3E980, Message);
      v8 = BcpFindMessage(0xC1008008);
      RtlInitUnicodeString(&stru_140E3E9A0, v8);
      v9 = BcpFindMessage(0x41008009u);
      RtlInitUnicodeString(&stru_140E3E9B0, v9);
      v10 = BcpFindMessage(0x41008010u);
      RtlInitUnicodeString(&usAddend, v10);
      v11 = BcpFindMessage(0x41008011u);
      RtlInitUnicodeString(&stru_140E3E9D0, v11);
      if ( !FeatureEnabledBsodRejuvenation )
        goto LABEL_62;
      Length = stru_140E3E9D0.Length;
      if ( stru_140E3E9B0.Length >= stru_140E3E9D0.Length )
        Length = stru_140E3E9B0.Length;
      if ( Length < usAddend.Length )
        Length = usAddend.Length;
      if ( RtlUShortAdd(stru_140E3E980.Length, Length, &pusResult) >= 0 && RtlUShortAdd(pusResult, 4u, v13) >= 0 )
      {
        qword_140E3EAE0 = BgpFwAllocateMemory(pusResult);
        if ( qword_140E3EAE0 )
        {
LABEL_62:
          v14 = BcpFindMessage(0xC1008003);
          RtlInitUnicodeString(&stru_140E3E990, v14);
          v15 = BcpFindMessage(0x41008014u);
          RtlInitUnicodeString(&stru_140E3EA20, v15);
          v16 = BcpFindMessage(0x41008015u);
          RtlInitUnicodeString(&stru_140E3EA30, v16);
          v17 = BcpFindMessage(0x41008016u);
          RtlInitUnicodeString(&stru_140E3EA40, v17);
          v18 = BcpFindMessage(0x41008018u);
          RtlInitUnicodeString(&stru_140E3EA50, v18);
          v19 = BcpFindMessage(0x41008017u);
          RtlInitUnicodeString(&stru_140E3EA60, v19);
          v20 = BcpFindMessage(0x41008019u);
          RtlInitUnicodeString(&stru_140E3EA70, v20);
          v21 = BcpFindMessage(0x41008020u);
          RtlInitUnicodeString(&stru_140E3EA80, v21);
          if ( !FeatureEnabledBsodRejuvenation
            || RtlUShortAdd(stru_140E3EA70.Length, stru_140E3EA80.Length, &word_140E3EAD8) >= 0
            && RtlUShortAdd(word_140E3EAD8, 4u, v22) >= 0
            && (qword_140E3EAD0 = BgpFwAllocateMemory(word_140E3EAD8)) != 0 )
          {
            v23 = BcpFindMessage(0x41008021u);
            RtlInitUnicodeString(&stru_140E3EA90, v23);
            if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v43) >= 0 )
            {
              RtlInitUnicodeString(&stru_140E3E9E0, SourceString);
              RtlInitUnicodeString(&stru_140E3E9F0, v43);
              ProgressMessages = BcpGetProgressMessages(3238035475LL, &v45, &v43);
              v6 = v45;
              if ( ProgressMessages >= 0 )
              {
                RtlInitUnicodeString(&stru_140E3EA00, v45);
                RtlInitUnicodeString(&stru_140E3EA10, v43);
                if ( !FeatureEnabledBsodRejuvenation
                  || RtlUShortAdd(stru_140E3E9E0.Length, stru_140E3E9F0.Length, &word_140E3EAB8) >= 0
                  && RtlUShortAdd(word_140E3EAB8, stru_140E3EA00.Length, v25) >= 0
                  && RtlUShortAdd(word_140E3EAB8, stru_140E3EA10.Length, v26) >= 0
                  && RtlUShortAdd(word_140E3EAB8, 8u, v27) >= 0
                  && (qword_140E3EAB0 = BgpFwAllocateMemory(word_140E3EAB8)) != 0
                  && (qword_140E3EAA8 = BgpFwAllocateMemory(0x400uLL)) != 0
                  && RtlUShortAdd(stru_140E3EA20.Length, 4u, &word_140E3EAC8) >= 0
                  && RtlUShortAdd(word_140E3EAC8, 0x100u, v28) >= 0
                  && (qword_140E3EAC0 = BgpFwAllocateMemory(word_140E3EAC8)) != 0 )
                {
                  if ( *BcpFindMessage(0x41008006u) == 48 )
                    dword_140EF0050 |= 0x20000u;
                  if ( (*(_DWORD *)(a1 + 120) & 0x10000000) != 0 )
                    v41[0] = -14389468;
                  else
                    v41[0] = FeatureEnabledBsodRejuvenation != 0 ? -16777216 : -16761454;
                  v41[1] = -1;
                  v31 = (unsigned int *)&unk_140E0EED0;
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
                      if ( (__int64)v31 < (__int64)&dword_140E0F074 )
                        goto LABEL_36;
                      HIDWORD(v42) = 0;
                      if ( (int)BcpGetMaxResourceProfile((__int128 *)v41, (unsigned __int64 *)&v40) >= 0 )
                      {
                        v34 = v40;
                        Memory = BgpFwAllocateMemory(v40);
                        if ( Memory )
                        {
                          qword_140EEFF90 = 0LL;
                          BcpWorkspace = Memory;
                          v38 = __PAIR64__(HIDWORD(v37), DWORD2(v40));
                          qword_140EEFF88 = v34;
                          qword_140E3EAA0 = BgpDisplayCharacterGetContext((__int64)v41, (int *)&v38, 3);
                          if ( qword_140E3EAA0 )
                          {
                            dword_140EF0050 |= 0x10u;
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
        if ( qword_140E3EAD0 )
          BgpFwFreeMemory(qword_140E3EAD0);
        if ( qword_140E3EAB0 )
          BgpFwFreeMemory(qword_140E3EAB0);
        if ( qword_140E3EAA8 )
          BgpFwFreeMemory(qword_140E3EAA8);
        if ( qword_140E3EAC0 )
          BgpFwFreeMemory(qword_140E3EAC0);
      }
      if ( qword_140E3EAA0 )
        BgpDisplayCharacterDestroyContext(qword_140E3EAA0);
    }
  }
  return 0LL;
}
