/*
 * XREFs of ?ApplyGameRelatedForGameModeProcess@BroadcastDVRComponent@@AEAAXKAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x1801D03E4
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800A6FF0 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?ApplyGameRelatedForRelatedProcess@BroadcastDVRComponent@@AEAAXKGK@Z @ 0x180315974 (-ApplyGameRelatedForRelatedProcess@BroadcastDVRComponent@@AEAAXKGK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  __int64 v8; // r15
  unsigned int i; // esi
  char *v10; // rbx
  PCWSTR StringRawBuffer; // rax
  BroadcastDVRComponent *v12; // rcx
  void *v13; // rcx
  bool v14; // zf
  void *v15; // rcx
  void *v16; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  unsigned int v18; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+48h]
  LPVOID pv; // [rsp+A8h] [rbp+58h]

  v19 = a2;
  v18 = 0;
  pv = 0LL;
  v4 = *(__int64 **)(a1 + 256);
  v5 = *v4;
  v16 = 0LL;
  v17 = 1;
  v6 = (*(unsigned int (__fastcall **)(__int64 *, __int64, unsigned int *, void **))(v5 + 96))(v4, a2, &v18, &v16) >> 31;
  if ( v17 )
  {
    v15 = pv;
    pv = v16;
    if ( v15 )
      CoTaskMemFree(v15);
  }
  if ( !(_BYTE)v6 )
  {
    v7 = 0;
    if ( (__int64)(a3[1] - *a3) >> 4 )
    {
      v8 = 0LL;
      do
      {
        for ( i = 0; i < v18; ++i )
        {
          v10 = (char *)pv;
          StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a3 + 16 * v8 + 8), 0LL);
          if ( !(unsigned int)_o__wcsicmp(StringRawBuffer, &v10[62 * i + 2]) )
          {
            BroadcastDVRComponent::ApplyGameRelatedForRelatedProcess(
              v12,
              *(_DWORD *)(*a3 + 16 * v8),
              *((_WORD *)pv + 31 * i),
              v19);
            break;
          }
        }
        v8 = ++v7;
      }
      while ( v7 < (unsigned __int64)((__int64)(a3[1] - *a3) >> 4) );
    }
  }
  v13 = pv;
  v14 = pv == 0LL;
  pv = 0LL;
  if ( !v14 )
    CoTaskMemFree(v13);
}
