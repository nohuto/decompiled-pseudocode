/*
 * XREFs of ?RmpSystemSetActivityHostQoS@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180004594
 * Callers:
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800043F4 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpSystemSetActivityHostQoS(struct _RM_ACTIVITY_HOST *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // r11
  bool v6; // cf
  __int64 v7; // r9
  _BYTE v9[36]; // [rsp+40h] [rbp-68h] BYREF
  int v10; // [rsp+64h] [rbp-44h]
  __int64 v11; // [rsp+90h] [rbp-18h]

  v2 = a2;
  memset_0(v9, 0, 0x60uLL);
  v4 = *((_QWORD *)a1 + 6);
  v5 = *((_QWORD *)a1 + 4);
  v6 = *((_BYTE *)a1 + 656) != 0;
  v7 = *((unsigned int *)a1 + 156);
  v10 = 1;
  v11 = v2;
  return (*(__int64 (__fastcall **)(char *, _QWORD, char *, __int64, __int64, int, _BYTE *))(*(_QWORD *)(v4 + 40) + 136LL))(
           (char *)a1 + 552,
           *((unsigned int *)a1 + 155),
           (char *)a1 + 88,
           v7,
           v5,
           v6 ? 4 : 0,
           v9);
}
