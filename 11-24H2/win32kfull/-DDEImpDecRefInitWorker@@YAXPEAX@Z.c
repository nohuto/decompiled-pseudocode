/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAX@Z @ 0x1401FB400
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 */

void __fastcall DDEImpDecRefInitWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _WORD *v9; // rbx
  __int64 v11; // rax

  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(a1, a2);
  if ( v4 )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    Prop = GetProp(v4, *(unsigned __int16 *)(UserSessionState + 41404), 1u);
    v9 = (_WORD *)Prop;
    if ( Prop )
    {
      if ( (*(_WORD *)(Prop + 88))-- == 1 )
      {
        v11 = W32GetUserSessionState(v8, v7);
        InternalRemoveProp(v4, *(unsigned __int16 *)(v11 + 41404), 1u);
        if ( !v9[45] )
        {
          SeDeleteClientSecurity(v9 + 8);
          Win32FreePool(v9);
        }
      }
    }
  }
}
