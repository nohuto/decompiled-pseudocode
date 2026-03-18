/*
 * XREFs of ?Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ @ 0x1401553E8
 * Callers:
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 */

__int64 __fastcall InputVirtualization::RootSynthesizedMouseList::Initialize(__int64 a1)
{
  __int64 UserSessionState; // rbx
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rcx

  UserSessionState = W32GetUserSessionState(a1);
  if ( !*(_QWORD *)(UserSessionState + 19544) )
  {
    v2 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x68747455u);
    if ( v2 )
    {
      *v2 = 0LL;
      v2[1] = 0LL;
      v2[3] = 0LL;
      v2[2] = 0LL;
      v2[3] = 0LL;
    }
    *(_QWORD *)(UserSessionState + 19544) = v2;
    if ( isChildPartition(v3) )
    {
      v5 = *(_QWORD **)(W32GetUserSessionState(v4) + 19544);
      v5[1] = v5;
      *v5 = v5;
    }
  }
  return *(_QWORD *)(UserSessionState + 19544) == 0LL ? 0xC0000017 : 0;
}
