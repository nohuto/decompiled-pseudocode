/*
 * XREFs of DxgkHandleVideoParameters @ 0x14022BBF0
 * Callers:
 *     DpiGdoHandleVideoParameters @ 0x14024F238 (DpiGdoHandleVideoParameters.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140055474 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x140195C0C (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x14019663C (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x140198DF0 (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x14022BA4C (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 *     ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1402516EC (-DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTE.c)
 *     ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x140251EFC (-DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1402529A4 (-DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x140253840 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkHandleVideoParameters(DXGADAPTER ***a1, unsigned int a2, char *Source1)
{
  __int64 v4; // r13
  struct DXGPROCESS *Current; // rax
  int v7; // edi
  unsigned int v8; // ebx
  int v9; // r14d
  int v10; // eax
  unsigned __int8 v11; // r12
  int v12; // eax
  int CurrentTvStandard; // eax
  unsigned int v14; // r8d
  int CopyProtection; // eax
  __int64 v16; // rdx
  unsigned __int8 v18[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v19; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v20; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v21[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = a2;
  Current = DXGPROCESS::GetCurrent();
  v7 = 0;
  if ( Current )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGPROCESS *)((char *)Current + 360), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    v9 = 1;
    if ( !a1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 65;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDxgAdapter != NULL", 65LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, (struct DXGADAPTER *const)a1, 0LL);
    v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22, 0LL);
    if ( DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)a1) )
    {
      if ( (unsigned int)v4 < *((_DWORD *)a1[390] + 24) )
      {
        if ( RtlCompareMemory(Source1, &GUID_VIDEO_PARAMETERS, 0x10uLL) != 16 )
        {
          v8 = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 99;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Specified GUID does not match VIDEOPARAMETERS GUID, returning 0x%I64x.",
            -1073741811LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_44;
        }
        v20 = 0;
        v18[0] = 0;
        DmmIsSourcePresentedOnClientVidPnAnalogTvOut(a1, v4, v18, &v20);
        v10 = *((_DWORD *)Source1 + 5);
        v11 = v18[0];
        if ( v10 == 1 )
        {
          *(_QWORD *)(Source1 + 28) = 0LL;
          *(_QWORD *)(Source1 + 36) = 0LL;
          *(_QWORD *)(Source1 + 44) = 0LL;
          v8 = 0;
          *(_QWORD *)(Source1 + 52) = 0LL;
          *(_QWORD *)(Source1 + 60) = 0LL;
          *(_QWORD *)(Source1 + 68) = 0LL;
          *(_QWORD *)(Source1 + 76) = 0LL;
          *(_QWORD *)(Source1 + 84) = 0LL;
          *(_QWORD *)(Source1 + 92) = 0LL;
          memset(Source1 + 100, 0, 0x100uLL);
          *((_DWORD *)Source1 + 6) = 3;
          if ( v11 == 1 )
          {
            v19 = 0;
            DmmGetPathContentFromClientVidPnSource(a1, v4, (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *)&v19);
            v12 = (v19 == 2) + 1;
          }
          else
          {
            v12 = 1;
          }
          *((_DWORD *)Source1 + 7) = v12;
          *((_DWORD *)Source1 + 9) = 3;
          if ( v11 == 1 )
            CurrentTvStandard = GetCurrentTvStandard((struct DXGADAPTER *)a1, v20);
          else
            CurrentTvStandard = 0x8000;
          *((_DWORD *)Source1 + 8) = CurrentTvStandard;
          *((_DWORD *)Source1 + 10) = CurrentTvStandard | 0x8000;
          if ( v11 == 1 )
          {
            v19 = 0;
            DmmGetMacrovisonSupportFromClientVidPnSource(a1, v4, &v19);
            if ( (*(_BYTE *)&v19 & 4) == 0 && (*(_BYTE *)&v19 & 2) == 0 )
              v9 = 0;
            *((_DWORD *)Source1 + 20) = v9;
            if ( !v9 )
              goto LABEL_44;
          }
          else
          {
            *((_DWORD *)Source1 + 20) = 1;
          }
          *((_DWORD *)Source1 + 6) |= 0x100u;
          *((_DWORD *)Source1 + 22) = 196799;
        }
        else if ( v10 == 2 )
        {
          v8 = 0;
          if ( (*((_DWORD *)Source1 + 6) & 0x100) != 0 )
          {
            switch ( *((_DWORD *)Source1 + 21) )
            {
              case 1:
                v16 = *((unsigned int *)Source1 + 24);
                if ( (unsigned int)(v16 - 1) > 2 )
                {
                  v8 = -1073741811;
                  WdLogSingleEntry2(3LL, v16, -1073741811LL);
                  WdLogGlobalForLineNumber = 223;
                  goto LABEL_44;
                }
                if ( *((_DWORD *)Source1 + 20) != 1 )
                {
                  v8 = -1073741811;
                  WdLogSingleEntry2(3LL, v16, -1073741811LL);
                  WdLogGlobalForLineNumber = 237;
                  goto LABEL_44;
                }
                CopyProtection = ADAPTER_DISPLAY::CreateCopyProtection(a1[390], v4, v16, (unsigned int *)Source1 + 23);
                break;
              case 2:
                CopyProtection = ADAPTER_DISPLAY::DestroyCopyProtection(a1[390], v4, *((_DWORD *)Source1 + 23));
                break;
              case 4:
                v14 = *((_DWORD *)Source1 + 24);
                if ( v14 > 3 )
                {
                  v8 = -1073741811;
                  WdLogSingleEntry2(3LL, v14, -1073741811LL);
                  WdLogGlobalForLineNumber = 262;
                  goto LABEL_44;
                }
                CopyProtection = ADAPTER_DISPLAY::UpdateCopyProtection(
                                   (ADAPTER_DISPLAY *)a1[390],
                                   v4,
                                   v14,
                                   *((_DWORD *)Source1 + 23));
                break;
              default:
                v8 = -1073741811;
                WdLogSingleEntry2(3LL, *((unsigned int *)Source1 + 21), -1073741811LL);
                WdLogGlobalForLineNumber = 279;
                goto LABEL_44;
            }
            v8 = CopyProtection;
            if ( CopyProtection < 0 )
              goto LABEL_44;
          }
          if ( v11 == 1 && (*((_DWORD *)Source1 + 6) & 1) != 0 )
          {
            LOBYTE(v7) = *((_DWORD *)Source1 + 7) == 2;
            DmmUpdateContentOnAllClientVidPnPathsFromSource(a1, v4, (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT)(v7 + 1));
          }
        }
      }
      else
      {
        WdLogSingleEntry3(2LL, v4, a1, -1071774975LL);
        WdLogGlobalForLineNumber = 89;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Caller specified VidPn source 0x%I64x is not valid on  adapter 0x%I64x, returning 0x%I64x.",
          v4,
          (__int64)a1,
          -1071774975LL,
          0LL,
          0LL);
        v8 = -1071774975;
      }
    }
    else
    {
      v8 = -1073741637;
      WdLogSingleEntry2(2LL, a1, -1073741637LL);
      WdLogGlobalForLineNumber = 79;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkHandleVideoParameters is called on a render only or display only adapter 0x%I64x, returning 0x%I64x.",
        (__int64)a1,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_44:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
    return v8;
  }
  v8 = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 45;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Invalid process context, returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return v8;
}
