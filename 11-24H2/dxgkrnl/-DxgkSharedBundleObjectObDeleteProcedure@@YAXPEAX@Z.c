/*
 * XREFs of ?DxgkSharedBundleObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1401E0E00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 */

void __fastcall DxgkSharedBundleObjectObDeleteProcedure(PVOID *a1, __int64 a2, __int64 a3)
{
  __int64 i; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+30h] [rbp-18h]

  v7 = -1;
  v8 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v9 = 1;
    v7 = 16004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 16004);
  }
  else
  {
    v9 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v7, 16004);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 6); i = (unsigned int)(i + 1) )
  {
    ObfDereferenceObject(a1[i + 4]);
    a1[i + 4] = 0LL;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
  if ( v9 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v7);
  }
}
