/*
 * XREFs of ?Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z @ 0x140149100
 * Callers:
 *     ?ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z @ 0x140139484 (-ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z.c)
 * Callees:
 *     AddStringToBufferContext @ 0x1400CEDF4 (AddStringToBufferContext.c)
 *     ?ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z @ 0x140148DA0 (-ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z.c)
 *     ?ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z @ 0x140148E30 (-ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z.c)
 *     CopyKnobInformationToIoctl @ 0x140148EFC (CopyKnobInformationToIoctl.c)
 *     ?EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z @ 0x140148F90 (-EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z.c)
 *     ?FindById@KnobNamespace@@CAPEAV1@PEBU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x140149020 (-FindById@KnobNamespace@@CAPEAV1@PEBU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 *     ?QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z @ 0x140149444 (-QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z.c)
 *     ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x140149500 (-SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z.c)
 *     ?SetKnobStoreValue@KnobNamespace@@AEAAJPEB_W_K_N@Z @ 0x1401495CC (-SetKnobStoreValue@KnobNamespace@@AEAAJPEB_W_K_N@Z.c)
 *     ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x1401496A4 (-UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015FAC0 (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

__int64 __fastcall KnobNamespace::Ioctl(
        char a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5,
        KPushLockBase *a6,
        unsigned int *a7)
{
  unsigned int *v7; // r15
  unsigned int v8; // edi
  int v11; // edx
  int v12; // edx
  int v13; // edx
  _DWORD *v15; // rbx
  KnobNamespace *v16; // rax
  int v17; // ecx
  char v18; // r8
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  KPushLockBase *v24; // rcx
  bool v25; // al
  _DWORD *v26; // rbx
  KnobNamespace *v27; // rax
  unsigned int updated; // eax
  KLockHolder *v29; // rcx
  _DWORD *v30; // rbx
  KnobNamespace *v31; // rax
  KPushLockBase *v32; // rcx
  _DWORD *v33; // rbx
  void (*v34)(void *, const wchar_t *); // rdx
  KnobNamespace *v35; // rcx
  KPushLockBase *v36; // rbx
  KLockThisShared v37; // [rsp+20h] [rbp-50h] BYREF
  struct NDIS_KNOB_INFORMATION v38; // [rsp+38h] [rbp-38h] BYREF
  __int16 v39; // [rsp+98h] [rbp+28h] BYREF

  v7 = a7;
  v8 = 0;
  *a7 = 0;
  v11 = a2 - 1198084;
  if ( v11 )
  {
    v12 = v11 - 8;
    if ( v12 )
    {
      v13 = v12 - 16380;
      if ( v13 )
      {
        if ( v13 != 8 )
          return 3221225659LL;
        if ( a1 )
        {
          if ( a3 >= 0x2C && a4 >= 8 )
          {
            v15 = a5;
            if ( *a5 == 1 )
            {
              KLockThisShared::KLockThisShared(&v37, &stru_14011CAF0);
              v16 = KnobNamespace::FindById((const struct _CONFIG_KNOB_NAMESPACE *)(v15 + 1));
              if ( v16 )
              {
                if ( *((_WORD *)v15 + ((unsigned __int64)(a3 - 40) >> 1) + 19) )
                {
LABEL_43:
                  v8 = -1073741811;
                  goto LABEL_37;
                }
                v17 = v15[6];
                v18 = 0;
                if ( v17 )
                {
                  v19 = v17 - 1;
                  if ( v19 )
                  {
                    v20 = v19 - 1;
                    if ( v20 )
                    {
                      v21 = v20 - 1;
                      if ( v21 )
                      {
                        v22 = v21 - 1;
                        if ( v22 )
                        {
                          if ( v22 != 1 )
                            goto LABEL_43;
                        }
                        else
                        {
                          v18 = 1;
                        }
                        v23 = KnobNamespace::SetKnobStoreValue(
                                v16,
                                (const wchar_t *)v15 + 20,
                                *((_QWORD *)v15 + 4),
                                v18);
                      }
                      else
                      {
                        v23 = KnobNamespace::SetKnobEphemeralValue(v16, (const wchar_t *)v15 + 20, *((_QWORD *)v15 + 4));
                      }
                      goto LABEL_25;
                    }
                  }
                  else
                  {
                    v18 = 1;
                  }
                  v23 = KnobNamespace::ClearKnobStoreValue(v16, (const wchar_t *)v15 + 20, v18);
                }
                else
                {
                  v23 = KnobNamespace::ClearKnobEphemeralValue(v16, (const wchar_t *)v15 + 20);
                }
LABEL_25:
                v24 = a6;
                *v7 = 8;
                v24->m_Lock.Value = 0LL;
                HIDWORD(v24->m_Lock.Ptr) = v23;
                v25 = v23 == -1073741102;
LABEL_36:
                *(_BYTE *)&v24->m_Lock.0 = v25;
                goto LABEL_37;
              }
              goto LABEL_32;
            }
            return 3221225560LL;
          }
          return 3221225507LL;
        }
        return 3221225506LL;
      }
      if ( !a1 )
        return 3221225506LL;
      if ( a3 < 0x1C || !a4 )
        return 3221225507LL;
      v26 = a5;
      if ( *a5 != 1 )
        return 3221225560LL;
      KLockThisShared::KLockThisShared(&v37, &stru_14011CAF0);
      v27 = KnobNamespace::FindById((const struct _CONFIG_KNOB_NAMESPACE *)(v26 + 1));
      if ( v27 )
      {
        LOBYTE(v39) = 0;
        updated = KnobNamespace::UpdateKnobs(v27, (bool *)&v39);
        if ( !updated )
        {
          v24 = a6;
          v25 = (_BYTE)v39 != 0;
          *v7 = 1;
          goto LABEL_36;
        }
        v8 = updated;
LABEL_37:
        v29 = &v37;
LABEL_55:
        KLockHolder::~KLockHolder(v29);
        return v8;
      }
    }
    else
    {
      if ( a3 < 0x1C || a4 < 0x30 )
        return 3221225507LL;
      v30 = a5;
      if ( *a5 != 1 )
        return 3221225560LL;
      KLockThisShared::KLockThisShared(&v37, &stru_14011CAF0);
      v31 = KnobNamespace::FindById((const struct _CONFIG_KNOB_NAMESPACE *)(v30 + 1));
      if ( v31 )
      {
        if ( !*((_WORD *)v30 + ((unsigned __int64)(a3 - 24) >> 1) + 11) )
        {
          memset(&v38, 0, sizeof(v38));
          if ( KnobNamespace::QueryKnobInformation(v31, (const wchar_t *)v30 + 12, &v38) )
          {
            v32 = a6;
            *(_OWORD *)&a6->m_Lock.0 = 0LL;
            *(_OWORD *)&v32[2].m_Lock.0 = 0LL;
            *(_OWORD *)&v32[4].m_Lock.0 = 0LL;
            CopyKnobInformationToIoctl((__int64)v32, (__int64)&v38);
            *v7 = 48;
          }
          else
          {
            v8 = -1073741772;
          }
          goto LABEL_37;
        }
        goto LABEL_43;
      }
    }
LABEL_32:
    v8 = -1073741766;
    goto LABEL_37;
  }
  if ( a3 >= 0x18 && a4 >= 0xC )
  {
    v33 = a5;
    if ( *a5 == 1 )
    {
      KLockThisShared::KLockThisShared((KLockThisShared *)&v38, &stru_14011CAF0);
      v35 = KnobNamespace::FindById((const struct _CONFIG_KNOB_NAMESPACE *)(v33 + 1));
      if ( v35 )
      {
        v36 = a6;
        *(_QWORD *)&v37.m_State = 0LL;
        *((_DWORD *)&v37.m_Region + 1) = 0;
        a6->m_Lock.Value = 0LL;
        v37.m_Lock = v36 + 1;
        *(_DWORD *)&v37.m_Region.m_Entered = (a4 - 8) >> 1;
        KnobNamespace::EnumerateKnobs(v35, v34, &v37);
        v39 = 0;
        AddStringToBufferContext((__int64)&v37, &v39, 1u);
        v36->m_Lock.0 = *($2F38BEDF952D5DA5F266621B11247D04 *)&v37.m_State;
        *v7 = LODWORD(v37.m_Lock) - (_DWORD)v36;
      }
      else
      {
        v8 = -1073741766;
      }
      v29 = (KLockHolder *)&v38;
      goto LABEL_55;
    }
    return 3221225560LL;
  }
  return 3221225507LL;
}
