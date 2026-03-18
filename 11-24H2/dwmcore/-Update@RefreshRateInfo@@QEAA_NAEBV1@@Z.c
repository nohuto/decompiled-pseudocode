/*
 * XREFs of ?Update@RefreshRateInfo@@QEAA_NAEBV1@@Z @ 0x180213494
 * Callers:
 *     ?UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ @ 0x180240B20 (-UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ.c)
 *     ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x1802BF9B0 (-UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall RefreshRateInfo::Update(RefreshRateInfo *this, const struct RefreshRateInfo *a2)
{
  char v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax

  v2 = 0;
  if ( *(_DWORD *)a2 && *((_DWORD *)a2 + 1) )
  {
    if ( *(_DWORD *)this != *(_DWORD *)a2 || *((_DWORD *)this + 1) != *((_DWORD *)a2 + 1) )
    {
      v2 = 1;
      *(_QWORD *)this = *(_QWORD *)a2;
    }
    v3 = *((_QWORD *)a2 + 1);
    if ( *((_QWORD *)this + 1) != v3 )
    {
      *((_QWORD *)this + 1) = v3;
      v2 = 1;
    }
    v4 = *((_QWORD *)a2 + 2);
    if ( *((_QWORD *)this + 2) != v4 )
    {
      *((_QWORD *)this + 2) = v4;
      v2 = 1;
    }
    v5 = *((_DWORD *)a2 + 6);
    if ( *((_DWORD *)this + 6) == v5 )
    {
      if ( !v2 )
        return v2;
    }
    else
    {
      *((_DWORD *)this + 6) = v5;
      v2 = 1;
    }
    *((_DWORD *)this + 7) = 0;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  return v2;
}
