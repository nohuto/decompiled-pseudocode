/*
 * XREFs of ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x14002F040
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019B49C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::GetVidSchSibmitDataSize(ADAPTER_RENDER *this)
{
  __int64 v1; // rax
  int v2; // edx

  v1 = *((_QWORD *)this + 2);
  if ( *(int *)(v1 + 2736) < 0x2000 )
    v2 = 1;
  else
    v2 = *(_DWORD *)(v1 + 296);
  if ( *(int *)(v1 + 2736) >= 0x2000 || *(_BYTE *)(v1 + 3036) )
    return *(_DWORD *)(v1 + 2944) * ((v2 << 6) + ((8 * v2 + 231) & 0xFFFFFFF8)) + 8 * (v2 + 77);
  else
    return 1304LL;
}
