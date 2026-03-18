/*
 * XREFs of ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801BBAA8
 * Callers:
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801BA33C (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801BBF60 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1801BBAF4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CManipulationManager::GetManipulationThreadMessageCallSendHost(
        CManipulationManager *this,
        struct IMessageCallSendHost **a2)
{
  struct IMessageCallSendHost **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IMessageCallSendHost **)((char *)this + 40);
  if ( *((_QWORD *)this + 5) )
  {
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((char *)this + 40);
    *a2 = *v2;
  }
  return *v2 == 0LL ? 0x80004005 : 0;
}
