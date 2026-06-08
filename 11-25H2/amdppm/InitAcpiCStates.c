/*
 * XREFs of InitAcpiCStates @ 0x140024CE4
 * Callers:
 *     ProcLibDeviceStart @ 0x14002DBF4 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     InitAcpi1CStates @ 0x1400248E0 (InitAcpi1CStates.c)
 *     InitAcpi2CStates @ 0x140024B88 (InitAcpi2CStates.c)
 *     Display_CST @ 0x14002BFF4 (Display_CST.c)
 */

__int64 __fastcall InitAcpiCStates(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rax
  int inited; // ebp
  _QWORD *v5; // r14

  v1 = a1 + 26;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    a1[26],
    0LL);
  v3 = a1[35];
  inited = -1073741823;
  if ( (v3 & 0x7F070) != 0 )
  {
    inited = InitAcpi2CStates((__int64)a1, a1 + 66);
    if ( inited >= 0 )
      goto LABEL_8;
    a1[35] &= 0xFFFFFFFFFFF80F8FuLL;
    v5 = a1 + 26;
    v3 = a1[35];
  }
  else
  {
    v5 = v1;
  }
  if ( (v3 & 7) != 0 )
  {
    inited = InitAcpi1CStates((__int64)a1);
    v1 = v5;
    if ( inited < 0 )
    {
      a1[35] &= 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_9;
    }
LABEL_8:
    inited = 0;
    Display_CST(a1[66]);
  }
LABEL_9:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, *v1);
  return (unsigned int)inited;
}
