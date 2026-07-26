/*
 * XREFs of NdisMReadConfigBlock @ 0x1400EADA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisMReadConfigBlock(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebp
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, _QWORD); // rax
  __int64 v9; // rcx
  unsigned int v10; // edi

  v6 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      136,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  v8 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))a1[608];
  if ( v8 && (v9 = a1[609]) != 0 && (a2 = a1[576]) != 0 && (LODWORD(a2) = *(_DWORD *)(a2 + 8) & 5, (_BYTE)a2 == 5) )
    v10 = v8(v9, v6, a3, a4);
  else
    v10 = -1073741637;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      137,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  return v10;
}
