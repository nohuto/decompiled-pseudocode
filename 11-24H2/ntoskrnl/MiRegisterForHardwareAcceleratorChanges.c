/*
 * XREFs of MiRegisterForHardwareAcceleratorChanges @ 0x140C5E2C8
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiRegisterForHardwareAcceleratorChanges()
{
  __int64 result; // rax
  _DWORD v1[2]; // [rsp+20h] [rbp-29h] BYREF
  __int64 *v2; // [rsp+28h] [rbp-21h]
  int v3; // [rsp+30h] [rbp-19h]
  int v4; // [rsp+34h] [rbp-15h]
  PDRIVER_OBJECT v5; // [rsp+38h] [rbp-11h]
  _QWORD v6[3]; // [rsp+40h] [rbp-9h] BYREF
  int v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+5Ch] [rbp+13h]
  __int64 v9; // [rsp+60h] [rbp+17h]
  void (__fastcall *v10)(__int64); // [rsp+68h] [rbp+1Fh]
  __int64 v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  __int64 v13; // [rsp+80h] [rbp+37h]
  int v14; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+8Ch] [rbp+43h]
  __int64 v16; // [rsp+90h] [rbp+47h]

  v1[1] = 0;
  v4 = 0;
  v3 = 0;
  v2 = MM_ACCELERATOR_DATA_MOVER;
  v5 = PnpDriverObject;
  v1[0] = 2097153;
  result = AccelInitializeOffloadWorkspace(v1, &qword_140E375A0);
  if ( (int)result >= 0 )
  {
    v11 = 0LL;
    v9 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v16 = 0LL;
    v15 = 0;
    v6[1] = qword_140E375A0;
    v6[2] = &GUID_ACCELERATOR_TYPE_DATA_MOVER;
    v10 = MmAcceleratorCallbackRoutine;
    v6[0] = 5767169LL;
    v12 = 1114112LL;
    v7 = 1;
    v8 = 1;
    result = AccelAcquireResourcesAsync(v6);
    if ( (int)result < 0 )
    {
      result = AccelDestroyOffloadWorkspace(qword_140E375A0);
      qword_140E375A0 = 0LL;
    }
  }
  return result;
}
