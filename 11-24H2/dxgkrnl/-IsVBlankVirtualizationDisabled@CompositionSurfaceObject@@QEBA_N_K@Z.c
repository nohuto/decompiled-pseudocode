/*
 * XREFs of ?IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x140033F4C
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x14001D29C (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 * Callees:
 *     <none>
 */

char __fastcall CompositionSurfaceObject::IsVBlankVirtualizationDisabled(CompositionSurfaceObject *this, __int64 a2)
{
  char *v4; // rbx
  char v5; // di
  __int64 **v6; // rsi
  __int64 *i; // rax

  KeEnterCriticalRegion();
  v4 = (char *)this + 48;
  ExAcquirePushLockSharedEx((char *)this + 48, 0LL);
  v5 = 0;
  if ( *((_DWORD *)this + 44) )
  {
    v6 = (__int64 **)((char *)this + 160);
    for ( i = *v6; i != (__int64 *)v6; i = (__int64 *)*i )
    {
      if ( *(i - 1) == a2 )
      {
        v5 = *((_BYTE *)i + 17);
        break;
      }
    }
  }
  if ( PsGetCurrentThreadId() == *((HANDLE *)v4 + 1) )
  {
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v4, 0LL);
  }
  KeLeaveCriticalRegion();
  return v5;
}
