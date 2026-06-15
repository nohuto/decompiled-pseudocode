/*
 * XREFs of ??$query_dispatch@UIAudioProcessingObjectNotifications@@@weak_query_policy@details@wil@@CAJPEAUIWeakReference@@U?$integral_constant@_N$0A@@wistd@@PEAPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400322EC
 * Callers:
 *     _lambda_d3d8473ab69012044bcca3ea676e23db_::operator() @ 0x140032254 (_lambda_d3d8473ab69012044bcca3ea676e23db_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::weak_query_policy::query_dispatch<IAudioProcessingObjectNotifications>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v3 + 24))(
         a1,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v7);
  if ( v5 >= 0 )
  {
    if ( v7 )
    {
      v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v7)(
             v7,
             &GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4,
             a3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      return (unsigned int)-2147023728;
    }
  }
  return (unsigned int)v5;
}
