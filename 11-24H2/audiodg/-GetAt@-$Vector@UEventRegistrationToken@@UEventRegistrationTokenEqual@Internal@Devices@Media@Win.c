/*
 * XREFs of ?GetAt@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUEventRegistrationToken@@@Z @ 0x140045590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v3; // r14
  _DWORD *v4; // rbx
  unsigned int v5; // edi
  RTL_SRWLOCK *v6; // rsi
  __int64 v9; // rax
  int v10; // ebp

  v3 = a2;
  v4 = (_DWORD *)(a1 + 80);
  *a3 = 0LL;
  v5 = 0;
  v6 = (RTL_SRWLOCK *)(a1 + 88);
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    if ( SLODWORD(v6->Ptr) >= 0 )
      ++LODWORD(v6->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 88));
  }
  if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 48) )
  {
    v10 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 64);
    v10 = 0;
    *a3 = *(_QWORD *)(v9 + 8 * v3);
  }
  if ( v4 )
  {
    if ( *v4 == 1 )
      --LODWORD(v6->Ptr);
    else
      ReleaseSRWLockShared(v6);
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  return v5;
}
