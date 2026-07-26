/*
 * XREFs of NdisMEnableVirtualization @ 0x1400EA7A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisMEnableVirtualization(__int64 a1, __int16 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // si
  char v6; // bp
  unsigned __int16 v7; // bx
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64, __int64, int); // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-38h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      124,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      a1);
  }
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int))(a1 + 4800);
  if ( v9 && (v10 = *(_QWORD *)(a1 + 4824)) != 0 )
  {
    if ( a5 || !v7 )
    {
      LOBYTE(v13) = a5;
      LOBYTE(a4) = v5;
      LOBYTE(a3) = v6;
      v11 = v9(v10, v7, a3, a4, v13);
    }
    else
    {
      v11 = -1073741811;
    }
  }
  else
  {
    v11 = -1073741637;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x7Du,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      a1,
      v11);
  return v11;
}
