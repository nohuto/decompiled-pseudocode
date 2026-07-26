/*
 * XREFs of ?NdisPDPostItems@@YAXPEAUPD_QUEUE_HANDLE__@@PEAPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1400ABE10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

void __fastcall NdisPDPostItems(struct PD_QUEUE_HANDLE__ *a1, struct _SINGLE_LIST_ENTRY **a2)
{
  unsigned int v2; // r8d
  struct _SINGLE_LIST_ENTRY *v4; // rdi
  int v6; // edx
  int i; // ecx
  __int64 v8; // rax

  v2 = *((_DWORD *)a1 + 16);
  v4 = *a2;
  v6 = *((_DWORD *)a1 + 13);
  for ( i = v6 & (*((_DWORD *)a1 + 15) - v2 - 1); v4 && i; --i )
  {
    v8 = v2;
    v2 = v6 & (v2 + 1);
    *((_QWORD *)a1 + v8 + 24) = v4;
    v4 = v4->Next;
  }
  *((_DWORD *)a1 + 16) = v2;
  if ( *((_QWORD *)a1 + 5) && _InterlockedCompareExchange((volatile signed __int32 *)a1 + 14, 0, 1) == 1 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        29,
        98,
        (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
        (char)a1);
    }
    KeSetEvent(*((PRKEVENT *)a1 + 5), 2, 0);
  }
  *a2 = v4;
}
