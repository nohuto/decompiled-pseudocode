/*
 * XREFs of ?Channel_ReleaseResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_RELEASERESOURCE@@@Z @ 0x18019E680
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z @ 0x18019EA4C (-FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18019EA80 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18019EB30 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::Channel_ReleaseResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_RELEASERESOURCE *a4)
{
  unsigned int v4; // edi
  __int64 v6; // rax
  CNotificationResource *v7; // rcx
  void (__fastcall *v8)(CResource *__hidden, struct CChannelContext *, bool); // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // ebx
  int v12; // edx
  CCachedVisualImage *v13; // rcx
  void (*v14)(void); // rax
  int *v16; // r14
  int v17; // r9d
  _DWORD *v18; // r8

  v4 = *((_DWORD *)a4 + 1);
  if ( !v4
    || v4 >= *((_DWORD *)a3 + 7)
    || (v6 = *((_QWORD *)a3 + 5), !*(_DWORD *)(*((_DWORD *)a3 + 6) * v4 + v6))
    || (v7 = *(CNotificationResource **)(*((_DWORD *)a3 + 6) * v4 + v6 + 8)) == 0LL )
  {
    CComposition::FailFastOnMalformedPacket(1574860530LL, 0LL);
  }
  v8 = *(void (__fastcall **)(CResource *__hidden, struct CChannelContext *, bool))(*(_QWORD *)v7 + 168LL);
  if ( v8 == CNotificationResource::DetachFromChannel )
  {
    CNotificationResource::DetachFromChannel(v7, a2, 0);
  }
  else if ( v8 == CResource::DetachFromChannel )
  {
    CResource::DetachFromChannel(v7, a2, 0);
  }
  else
  {
    v8(v7, a2, 0);
  }
  v9 = *((_QWORD *)a2 + 6);
  if ( v4 < *(_DWORD *)(v9 + 28)
    && (v10 = *(_QWORD *)(v9 + 40), *(_DWORD *)(*(_DWORD *)(v9 + 24) * v4 + v10))
    && (v16 = (int *)(v10 + *(_DWORD *)(v9 + 24) * v4)) != 0LL )
  {
    v17 = *v16;
    v11 = 0;
    if ( *((_QWORD *)v16 + 1) )
    {
      v18 = *(_DWORD **)(v9 + 56);
      if ( v17 != 192 )
      {
        v12 = v17 - 32;
        switch ( v17 )
        {
          case 32:
          case 33:
          case 36:
          case 39:
          case 41:
            --v18[30];
            goto LABEL_22;
          case 42:
            --v18[31];
            goto LABEL_22;
          case 46:
          case 165:
            --v18[26];
            goto LABEL_22;
          case 92:
            --v18[29];
            goto LABEL_22;
          case 93:
          case 166:
          case 184:
            break;
          default:
            --v18[27];
            goto LABEL_22;
        }
      }
      --v18[28];
      v12 = v17 - 32;
      if ( v17 == 192 )
      {
LABEL_19:
        --dword_1803FAE40;
      }
      else
      {
LABEL_22:
        switch ( v12 )
        {
          case 0:
          case 1:
          case 4:
          case 7:
          case 9:
            --dword_1803FAE48;
            break;
          case 10:
            --dword_1803FAE4C;
            break;
          case 14:
          case 133:
            --dword_1803FAE38;
            break;
          case 60:
            --dword_1803FAE44;
            break;
          case 61:
          case 134:
          case 152:
            goto LABEL_19;
          default:
            --dword_1803FAE3C;
            break;
        }
      }
      v13 = (CCachedVisualImage *)*((_QWORD *)v16 + 1);
      v14 = *(void (**)(void))(*(_QWORD *)v13 + 16LL);
      if ( (char *)v14 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
          v13,
          (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
          (__int64)v18);
      else
        v14();
      *((_QWORD *)v16 + 1) = 0LL;
    }
    memset_0((void *)(*(_QWORD *)(v9 + 40) + v4 * *(_DWORD *)(v9 + 24)), 0, *(unsigned int *)(v9 + 24));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024890, 0x8FAu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024890, 0x5B4u, 0LL);
    return (unsigned int)-2147024890;
  }
  return v11;
}
