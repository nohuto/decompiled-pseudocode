/*
 * XREFs of ?s_DiscoverOwnedWindowsProc@CReportWindowVisibilityChange@@CAHPEAUHWND__@@_J@Z @ 0x18016B130
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9E90 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CReportWindowVisibilityChange::s_DiscoverOwnedWindowsProc(HWND a1, __int64 a2)
{
  unsigned int v4; // edi
  HWND v6; // rbp
  HWND i; // rcx
  HWND Window; // rax
  void *v9; // r8
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  v4 = 1;
  if ( IsWindowVisible(a1) && (unsigned int)GetWindowBand(a1, &v12) )
  {
    if ( v12 == *(_DWORD *)(a2 + 8) )
    {
      v6 = *(HWND *)a2;
      for ( i = a1; ; i = Window )
      {
        Window = GetWindow(i, 4u);
        if ( !Window )
          break;
        if ( Window == v6 )
        {
          v10 = *(_QWORD *)(a2 + 24);
          if ( v10 != *(_QWORD *)(a2 + 40)
            || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      a2 + 16,
                      v10 + 1,
                      v9) >= 0 )
          {
            v11 = (_QWORD *)(*(_QWORD *)(a2 + 16) + 8 * (*(_QWORD *)(a2 + 24))++);
            if ( v11 )
              *v11 = a1;
          }
          return v4;
        }
      }
    }
    if ( a1 == *(HWND *)a2 )
      return 0;
  }
  return v4;
}
