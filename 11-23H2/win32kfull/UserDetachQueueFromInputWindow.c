/*
 * XREFs of UserDetachQueueFromInputWindow @ 0x1C0086F18
 * Callers:
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C0086F00 (UserDetachQueueFromInputWindowApiExt.c)
 * Callees:
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C0026BF4 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C00413D4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0042A70 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1C0086FA8 (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 */

void __fastcall UserDetachQueueFromInputWindow(__int64 a1, struct IInputQueue *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  CInputQueueProp *v9; // rbx
  char v10; // [rsp+40h] [rbp+18h] BYREF
  CInputQueueProp *v11; // [rsp+48h] [rbp+20h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v10);
  LOBYTE(v4) = 1;
  v6 = HMValidateHandleNoSecure(a1, v4);
  if ( v6 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(v6) )
    {
      v11 = 0LL;
      if ( CWindowProp::GetProp<CInputQueueProp>(v6, (__int64 *)&v11) )
      {
        v9 = v11;
        CInputQueueProp::DetachInputQueue(v11, a2);
        if ( !*((_DWORD *)v9 + 8) )
          CWindowProp::RemoveAndDeleteProp(v9);
      }
    }
  }
  if ( !v10 )
    UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
}
