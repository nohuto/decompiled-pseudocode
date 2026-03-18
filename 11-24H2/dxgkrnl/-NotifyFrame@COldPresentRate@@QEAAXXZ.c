/*
 * XREFs of ?NotifyFrame@COldPresentRate@@QEAAXXZ @ 0x14009DBB8
 * Callers:
 *     ?UpdatePresentRate@CCompositionSurface@@IEAAXXZ @ 0x14001E498 (-UpdatePresentRate@CCompositionSurface@@IEAAXXZ.c)
 * Callees:
 *     ?AddPresent@CInterval@COldPresentRate@@QEAA_NK@Z @ 0x14009DB0C (-AddPresent@CInterval@COldPresentRate@@QEAA_NK@Z.c)
 */

void __fastcall COldPresentRate::NotifyFrame(COldPresentRate *this)
{
  COldPresentRate::CInterval *v1; // r9
  unsigned __int64 v2; // r8
  unsigned int i; // r10d
  unsigned int v4; // edx

  v1 = 0LL;
  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  for ( i = 0; i < 2; ++i )
  {
    v4 = *(_DWORD *)this;
    if ( *(_DWORD *)this && (unsigned int)v2 >= v4 && (unsigned int)v2 - v4 <= 0x3E8 )
    {
      if ( COldPresentRate::CInterval::AddPresent(this, v2) )
        return;
    }
    else
    {
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = 0;
      if ( !v1 )
        v1 = this;
    }
    this = (COldPresentRate *)((char *)this + 8);
  }
  COldPresentRate::CInterval::AddPresent(v1, v2);
}
