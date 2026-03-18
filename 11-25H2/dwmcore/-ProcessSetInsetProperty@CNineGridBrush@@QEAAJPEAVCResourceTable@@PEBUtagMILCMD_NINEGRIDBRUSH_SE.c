/*
 * XREFs of ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x1801E69AC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021400 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetInsetProperty(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY *a3)
{
  float v3; // xmm0_4
  unsigned int v5; // edi
  unsigned int v6; // ecx
  __int64 v7; // rax
  float *v8; // rdx
  void (__fastcall *v9)(__int64, unsigned int, __int64); // rax

  v3 = *((float *)a3 + 3);
  v5 = 0;
  v6 = *((_DWORD *)a3 + 2);
  if ( v6 )
  {
    switch ( v6 )
    {
      case 1u:
        v7 = 140LL;
        break;
      case 3u:
        v7 = 112LL;
        break;
      case 4u:
        v7 = 116LL;
        break;
      case 5u:
        v7 = 128LL;
        break;
      case 6u:
        v7 = 132LL;
        break;
      case 8u:
        v7 = 120LL;
        break;
      case 9u:
        v7 = 124LL;
        break;
      default:
LABEL_39:
        v5 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x147u, 0LL);
        return v5;
    }
  }
  else
  {
    v7 = 136LL;
  }
  if ( !(CNineGridBrush *)((char *)this + v7) || v3 < 0.0 )
    goto LABEL_39;
  if ( v6 )
  {
    switch ( v6 )
    {
      case 1u:
        v8 = (float *)((char *)this + 140);
        break;
      case 3u:
        v8 = (float *)((char *)this + 112);
        break;
      case 4u:
        v8 = (float *)((char *)this + 116);
        break;
      case 5u:
        v8 = (float *)((char *)this + 128);
        break;
      case 6u:
        v8 = (float *)((char *)this + 132);
        break;
      case 8u:
        v8 = (float *)((char *)this + 120);
        break;
      default:
        v8 = (float *)((char *)this + 124);
        break;
    }
  }
  else
  {
    v8 = (float *)((char *)this + 136);
  }
  if ( v3 != *v8 )
  {
    *v8 = v3;
    CResource::InvalidateAnimationSources(this, v6);
    v9 = *(void (__fastcall **)(__int64, unsigned int, __int64))(*(_QWORD *)this + 80LL);
    if ( v9 == CBrush::NotifyOnChanged )
      CBrush::NotifyOnChanged((__int64)this, 6u, (__int64)this);
    else
      v9((__int64)this, 6u, (__int64)this);
  }
  return v5;
}
