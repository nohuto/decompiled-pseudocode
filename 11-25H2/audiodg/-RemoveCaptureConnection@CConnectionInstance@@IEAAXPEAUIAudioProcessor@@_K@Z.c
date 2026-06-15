/*
 * XREFs of ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14003D8EC
 * Callers:
 *     ?RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z @ 0x140006DBC (-RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140006FB4 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CConnectionInstance::RemoveCaptureConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h]

  v15 = 0LL;
  v14 = 0LL;
  v6 = *((_QWORD *)this + 4);
  if ( !v6 )
    goto LABEL_8;
  v7 = *(_DWORD *)(v6 + 40);
  if ( v7 == 2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL);
    v15 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 96LL))(
      a2,
      a3,
      v8,
      *((_QWORD *)this + 1));
    v9 = v8;
    if ( !v8 )
      goto LABEL_8;
    v15 = 0LL;
    goto LABEL_7;
  }
  if ( ((v7 - 1) & 0xFFFFFFFD) == 0 )
  {
    if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v6 + 32))(
           **(_QWORD **)(v6 + 32),
           &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
           &v14) < 0 )
      goto LABEL_15;
    (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, a3, v14);
    v9 = v14;
    if ( v14 )
    {
      v14 = 0LL;
LABEL_7:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
LABEL_8:
  v10 = *((_QWORD *)this + 3);
  if ( !v10 )
    goto LABEL_15;
  v11 = *(_DWORD *)(v10 + 40);
  if ( v11 != 2 )
  {
    if ( ((v11 - 1) & 0xFFFFFFF9) != 0 )
      goto LABEL_15;
    if ( v11 == 7 )
      goto LABEL_15;
    if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v10 + 32))(
           **(_QWORD **)(v10 + 32),
           &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
           &v14) < 0 )
      goto LABEL_15;
    (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, a3, v14);
    v13 = v14;
    if ( !v14 )
      goto LABEL_15;
    v14 = 0LL;
    goto LABEL_14;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 40LL);
  v15 = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 80LL))(
    a2,
    a3,
    v12,
    *((_QWORD *)this + 1));
  v13 = v12;
  if ( v12 )
  {
    v15 = 0LL;
LABEL_14:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_15:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
}
