/*
 * XREFs of RtlConvertSharedToExclusive @ 0x180106EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireResourceExclusive @ 0x1800E04E0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x1800E0880 (RtlReleaseResource.c)
 */

char __fastcall RtlConvertSharedToExclusive(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rax

  LODWORD(v4) = *(_DWORD *)(a1 + 68);
  if ( (int)v4 >= 0 )
  {
    while ( (_DWORD)v4 == 1 )
    {
      LODWORD(v4) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), -1, 1);
      if ( (_DWORD)v4 == 1 )
      {
        v4 = NtCurrentTeb();
        *(_QWORD *)(a1 + 72) = v4->ClientId.UniqueThread;
        return (char)v4;
      }
    }
    RtlReleaseResource(a1, a2, a3, a4);
    LOBYTE(v4) = RtlAcquireResourceExclusive(a1, 1);
  }
  return (char)v4;
}
