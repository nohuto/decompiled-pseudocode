/*
 * XREFs of ?CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x140032464
 * Callers:
 *     _lambda_d3d8473ab69012044bcca3ea676e23db_::operator() @ 0x140032254 (_lambda_d3d8473ab69012044bcca3ea676e23db_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyEndpointPropertyChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x1400325AC (-CopyEndpointPropertyChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 *     ?CopyVolumeChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x14003260C (-CopyVolumeChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 *     ?CopyVolume2ChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x1400636B8 (-CopyVolume2ChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CopyNotification(struct APO_NOTIFICATION *a1, struct APO_NOTIFICATION *a2)
{
  __int64 v3; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v5 = CopyVolumeChangeNotification(a1, a2);
      if ( v5 >= 0 )
        return 0LL;
      v6 = 261LL;
      break;
    case 2:
      v5 = CopyEndpointPropertyChangeNotification(a1, a2);
      if ( v5 >= 0 )
        return 0LL;
      v6 = 267LL;
      break;
    case 3:
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)a1 + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
      *((_QWORD *)a1 + 8) = *((_QWORD *)a2 + 8);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD *)a1 + 1));
      v3 = *((_QWORD *)a1 + 5);
      goto LABEL_5;
    case 4:
      v5 = CopyVolume2ChangeNotification(a1, a2);
      if ( v5 >= 0 )
        return 0LL;
      v6 = 264LL;
      break;
    case 5:
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)a1 + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
      *((_QWORD *)a1 + 8) = *((_QWORD *)a2 + 8);
      return 0LL;
    default:
      if ( (unsigned int)(*(_DWORD *)a2 - 6) > 1 )
        return 0LL;
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)a1 + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
      *((_QWORD *)a1 + 8) = *((_QWORD *)a2 + 8);
      v3 = *((_QWORD *)a1 + 1);
LABEL_5:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
