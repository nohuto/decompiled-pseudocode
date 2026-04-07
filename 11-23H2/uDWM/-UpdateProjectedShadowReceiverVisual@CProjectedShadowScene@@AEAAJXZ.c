/*
 * XREFs of ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CF1A8
 * Callers:
 *     ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x1800CDEA0 (-AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z.c)
 *     ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800CED94 (-RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000BB3C (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasCasters@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA_NXZ @ 0x1800CE870 (-HasCasters@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA_NXZ.c)
 *     ?SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x1800CF028 (-SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@U.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CF324 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectedShadowScene::UpdateProjectedShadowReceiverVisual(
        CProjectedShadowScene::CProjectedShadowSceneInstance **this)
{
  CProjectedShadowScene::CProjectedShadowSceneInstance **v2; // rsi
  int v3; // eax
  int v4; // edi
  __int64 v5; // rdx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::IVisual *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 4;
  if ( !CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(this[3])
    && !CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(*v2)
    || *((_BYTE *)this + 64) )
  {
    if ( CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(this[3])
      || CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(*v2)
      || !*((_BYTE *)this + 64) )
    {
      return 0LL;
    }
    v4 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(this[3], 0LL);
    if ( v4 >= 0 )
    {
      v4 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(*v2, 0LL);
      if ( v4 >= 0 )
      {
        v4 = CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual((CProjectedShadowScene *)this);
        if ( v4 >= 0 )
        {
          *((_BYTE *)this + 64) = 0;
          return 0LL;
        }
        v7 = 203LL;
      }
      else
      {
        v7 = 201LL;
      }
    }
    else
    {
      v7 = 200LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v9 = 0LL;
  v3 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5,
         (__int64 *)&v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 189LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
    return (unsigned int)v4;
  }
  v3 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(this[3], v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 190LL;
    goto LABEL_12;
  }
  v3 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(*v2, v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 191LL;
    goto LABEL_12;
  }
  *((_BYTE *)this + 64) = 1;
  v3 = CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual((CProjectedShadowScene *)this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 195LL;
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  return 0LL;
}
