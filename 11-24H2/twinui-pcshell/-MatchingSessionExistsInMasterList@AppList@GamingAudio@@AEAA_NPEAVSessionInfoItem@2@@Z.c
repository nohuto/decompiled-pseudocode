/*
 * XREFs of ?MatchingSessionExistsInMasterList@AppList@GamingAudio@@AEAA_NPEAVSessionInfoItem@2@@Z @ 0x180367EE0
 * Callers:
 *     ?UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ @ 0x18036863C (-UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall GamingAudio::AppList::MatchingSessionExistsInMasterList(GamingAudio::AppList *this, HSTRING *a2)
{
  __int64 *v3; // rdx
  __int64 *v4; // rdi
  __int64 v5; // rcx
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v7; // rax

  if ( a2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 21);
    v4 = (__int64 *)*((_QWORD *)this + 20);
    if ( (unsigned int)(v3 - v4) )
    {
      while ( v4 != v3 )
      {
        v5 = *v4;
        if ( *v4 && *(_DWORD *)(v5 + 80) && *(_DWORD *)(v5 + 48) == *((_DWORD *)a2 + 12) )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(a2[7], 0LL);
          v7 = WindowsGetStringRawBuffer(*(HSTRING *)(*v4 + 56), 0LL);
          if ( CompareStringOrdinal(v7, -1, StringRawBuffer, -1, 0) != 2 )
          {
            *(_DWORD *)(*v4 + 80) = 0;
            return 0;
          }
          return 1;
        }
        ++v4;
      }
    }
  }
  return 0;
}
