/*
 * XREFs of ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x140074AB0
 * Callers:
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x140074A68 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 * Callees:
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1400755E4 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 */

__int64 __fastcall DirectComposition::CSharedSystemResource::Initialize(
        DirectComposition::CSharedSystemResource *this,
        int a2)
{
  __int64 v4; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  int SystemResource; // ebx

  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  KeEnterCriticalRegion();
  *((_DWORD *)this + 3) = a2;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v4);
  *((_QWORD *)this + 3) = DefaultConnection;
  if ( DefaultConnection )
  {
    SystemResource = DirectComposition::CConnection::CreateSystemResource(
                       DefaultConnection,
                       *((_DWORD *)this + 3),
                       (DirectComposition::CSharedSystemResource *)((char *)this + 16));
    if ( SystemResource >= 0 )
      *((_BYTE *)this + 8) = 1;
  }
  else
  {
    SystemResource = -1073741790;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SystemResource;
}
