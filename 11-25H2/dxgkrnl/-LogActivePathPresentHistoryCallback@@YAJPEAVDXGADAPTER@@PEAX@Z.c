/*
 * XREFs of ?LogActivePathPresentHistoryCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401C1610
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002F740 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?GetPresentDiagHistory@DISPLAY_SOURCE@@QEAAXPEAUPRESENTHISTORYDIAGNOSTICINFO@@I@Z @ 0x14006D4E8 (-GetPresentDiagHistory@DISPLAY_SOURCE@@QEAAXPEAUPRESENTHISTORYDIAGNOSTICINFO@@I@Z.c)
 *     DxgkWriteDiagEntry @ 0x1403757E0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall LogActivePathPresentHistoryCallback(struct DXGADAPTER *a1, void *a2)
{
  __int64 v3; // r9
  __int64 v4; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  DISPLAY_SOURCE *v10; // rbp
  __int64 v11; // rdx
  unsigned int v12; // eax
  _BYTE v14[56]; // [rsp+20h] [rbp-38h] BYREF
  void *v15; // [rsp+60h] [rbp+8h] BYREF

  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v14, a1, 1);
  if ( *((_QWORD *)a1 + 390) )
  {
    if ( *((_DWORD *)a1 + 50) == 1 )
    {
      v4 = *(unsigned int *)(*((_QWORD *)a1 + 390) + 424LL);
      if ( (_DWORD)v4 )
      {
        v5 = (_DWORD *)operator new[](168 * v4 + 64, 0x4B677844u, 256LL, v3);
        v15 = v5;
        v6 = v5;
        if ( v5 )
        {
          v5[10] = 0;
          *((_QWORD *)v5 + 4) = 0LL;
          v5[1] = 168 * v4 + 64;
          v7 = 0;
          *v5 = 52;
          *((_QWORD *)v5 + 1) = 0LL;
          *((_OWORD *)v5 + 1) = 0LL;
          v8 = *(_QWORD *)((char *)a1 + 412);
          v6[14] = 0;
          *((_QWORD *)v6 + 6) = v8;
          v9 = *((_QWORD *)a1 + 390);
          if ( *(_DWORD *)(v9 + 96) )
          {
            do
            {
              v10 = (DISPLAY_SOURCE *)(*(_QWORD *)(v9 + 128) + 3984LL * v7);
              if ( v10 && (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v9, v7) )
              {
                v11 = 42LL * (unsigned int)v6[14];
                v6[v11 + 16] = *((_DWORD *)v10 + 4);
                DISPLAY_SOURCE::GetPresentDiagHistory(v10, (struct PRESENTHISTORYDIAGNOSTICINFO *)&v6[v11 + 18]);
                ++v6[14];
              }
              v12 = v6[14];
              if ( v12 >= (unsigned int)v4 )
                break;
              v9 = *((_QWORD *)a1 + 390);
              ++v7;
            }
            while ( v7 < *(_DWORD *)(v9 + 96) );
            if ( v12 )
              DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v6);
          }
        }
        else
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 10413;
        }
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v15);
      }
    }
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  return 0LL;
}
