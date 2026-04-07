/*
 * XREFs of ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x180054520
 * Callers:
 *     ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x180054404 (-AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z.c)
 *     ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800CB14C (-RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180039C90 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x180054DA0 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x180054E90 (-SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@U.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasCasters@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA_NXZ @ 0x18009ACA8 (-HasCasters@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectedShadowScene::UpdateProjectedShadowReceiverVisual(CProjectedShadowScene *this)
{
  CProjectedShadowScene::CProjectedShadowSceneInstance **v2; // r14
  CProjectedShadowScene::CProjectedShadowSceneInstance **v3; // rsi
  CProjectedShadowScene::CProjectedShadowSceneInstance **v4; // rdi
  int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::IVisual *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CProjectedShadowScene::CProjectedShadowSceneInstance **)((char *)this + 24);
  v3 = (CProjectedShadowScene::CProjectedShadowSceneInstance **)((char *)this + 32);
  if ( CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(*((CProjectedShadowScene::CProjectedShadowSceneInstance **)this
                                                                        + 3)) )
  {
    v4 = v2;
  }
  else
  {
    if ( !CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(*v3) )
    {
      v4 = v2;
LABEL_5:
      if ( CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(*v2)
        || CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(*v3)
        || !*((_BYTE *)this + 64) )
      {
        return 0LL;
      }
      v5 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(*v4, 0LL);
      if ( v5 >= 0 )
      {
        v5 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(*v3, 0LL);
        if ( v5 >= 0 )
        {
          v5 = CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(this);
          if ( v5 >= 0 )
          {
            *((_BYTE *)this + 64) = 0;
            return 0LL;
          }
          v6 = 189LL;
        }
        else
        {
          v6 = 187LL;
        }
      }
      else
      {
        v6 = 186LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v5,
        v10);
      return (unsigned int)v5;
    }
    v4 = (CProjectedShadowScene::CProjectedShadowSceneInstance **)((char *)this + 24);
  }
  if ( *((_BYTE *)this + 64) )
    goto LABEL_5;
  v12 = 0LL;
  v7 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5,
         (__int64 *)&v12);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 175LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v7,
      v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
    return (unsigned int)v5;
  }
  v7 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(*v2, v12);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 176LL;
    goto LABEL_21;
  }
  v7 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(*v3, v12);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 177LL;
    goto LABEL_21;
  }
  *((_BYTE *)this + 64) = 1;
  v7 = CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(this);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 181LL;
    goto LABEL_21;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  return 0LL;
}
