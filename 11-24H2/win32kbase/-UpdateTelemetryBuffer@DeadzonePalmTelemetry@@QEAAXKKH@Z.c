/*
 * XREFs of ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1401F22A8
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1401EA84C (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 * Callees:
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x140124FC4 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 */

void __fastcall DeadzonePalmTelemetry::UpdateTelemetryBuffer(DeadzonePalmTelemetry *this, int a2, int a3, int a4)
{
  __int64 v5; // r10
  __int64 v6; // rdx

  v5 = *((_DWORD *)this + 1) % 0x280u;
  v6 = 2 * v5;
  *((_DWORD *)this + 2 * v6 + 517) = a3;
  *((_DWORD *)this + 2 * v6 + 515) = a4;
  *((_DWORD *)this + 4 * v5 + 516) = a2;
  *((_DWORD *)this + 2 * v6 + 518) = *(_DWORD *)this;
  ++*((_DWORD *)this + 1);
  DeadzonePalmTelemetry::_UploadTelemetryData(this, 0);
}
