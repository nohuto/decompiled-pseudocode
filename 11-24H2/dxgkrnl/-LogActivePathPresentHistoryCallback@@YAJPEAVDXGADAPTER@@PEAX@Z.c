/*
 * XREFs of ?LogActivePathPresentHistoryCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401C5720
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetPresentDiagHistory@DISPLAY_SOURCE@@QEAAXPEAUPRESENTHISTORYDIAGNOSTICINFO@@I@Z @ 0x14006D2A8 (-GetPresentDiagHistory@DISPLAY_SOURCE@@QEAAXPEAUPRESENTHISTORYDIAGNOSTICINFO@@I@Z.c)
 *     DxgkWriteDiagEntry @ 0x14031DEC0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall LogActivePathPresentHistoryCallback(struct DXGADAPTER *a1, void *a2)
{
  __int64 v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  DISPLAY_SOURCE *v9; // rbp
  __int64 v10; // rdx
  unsigned int v11; // eax
  _BYTE v13[56]; // [rsp+20h] [rbp-38h] BYREF
  void *v14; // [rsp+60h] [rbp+8h] BYREF

  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v13, a1, 1);
  if ( *((_QWORD *)a1 + 390) )
  {
    if ( *((_DWORD *)a1 + 50) == 1 )
    {
      v3 = *(unsigned int *)(*((_QWORD *)a1 + 390) + 432LL);
      if ( (_DWORD)v3 )
      {
        v4 = (_DWORD *)operator new[](168 * v3 + 64, 0x4B677844u, 256LL);
        v14 = v4;
        v5 = v4;
        if ( v4 )
        {
          v4[10] = 0;
          *((_QWORD *)v4 + 4) = 0LL;
          v4[1] = 168 * v3 + 64;
          v6 = 0;
          *v4 = 52;
          *((_QWORD *)v4 + 1) = 0LL;
          *((_OWORD *)v4 + 1) = 0LL;
          v7 = *(_QWORD *)((char *)a1 + 412);
          v5[14] = 0;
          *((_QWORD *)v5 + 6) = v7;
          v8 = *((_QWORD *)a1 + 390);
          if ( *(_DWORD *)(v8 + 96) )
          {
            do
            {
              v9 = (DISPLAY_SOURCE *)(*(_QWORD *)(v8 + 128) + 4024LL * v6);
              if ( v9 && (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v8, v6) )
              {
                v10 = 42LL * (unsigned int)v5[14];
                v5[v10 + 16] = *((_DWORD *)v9 + 4);
                DISPLAY_SOURCE::GetPresentDiagHistory(v9, (struct PRESENTHISTORYDIAGNOSTICINFO *)&v5[v10 + 18]);
                ++v5[14];
              }
              v11 = v5[14];
              if ( v11 >= (unsigned int)v3 )
                break;
              v8 = *((_QWORD *)a1 + 390);
              ++v6;
            }
            while ( v6 < *(_DWORD *)(v8 + 96) );
            if ( v11 )
              DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v5);
          }
        }
        else
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 10985;
        }
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v14);
      }
    }
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  return 0LL;
}
