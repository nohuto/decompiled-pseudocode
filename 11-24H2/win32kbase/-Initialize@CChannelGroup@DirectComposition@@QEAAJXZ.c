/*
 * XREFs of ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x1400CED10
 * Callers:
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1400CEB80 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannelGroup::Initialize(DirectComposition::CChannelGroup *this)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rbx
  NTSTATUS v4; // edi

  v2 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, sizeof(struct _ERESOURCE));
    v4 = ExInitializeResourceLite(v3);
    if ( v4 < 0 )
      GreDeleteFastMutex((char *)v3);
    else
      *((_QWORD *)this + 7) = v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
