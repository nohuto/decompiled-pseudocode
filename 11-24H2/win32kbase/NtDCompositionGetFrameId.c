/*
 * XREFs of NtDCompositionGetFrameId @ 0x140112960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrameId@CConnection@DirectComposition@@QEAA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x140073504 (-GetFrameId@CConnection@DirectComposition@@QEAA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetFrameId(unsigned int a1, void *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v7; // rdi
  unsigned int v8; // edx
  __int64 Src; // [rsp+48h] [rbp+10h] BYREF
  struct DirectComposition::CConnection *v11; // [rsp+50h] [rbp+18h]

  v4 = 0;
  if ( a2 && a1 <= 2 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v5);
    v7 = DefaultConnection;
    v11 = DefaultConnection;
    if ( DefaultConnection )
    {
      Src = DirectComposition::CConnection::GetFrameId(DefaultConnection, a1);
      if ( Src )
        RtlCopyToUser(a2, &Src, 8uLL);
      else
        v4 = -1073741823;
      DirectComposition::CConnection::Release(v7, v8);
    }
    else
    {
      v4 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
