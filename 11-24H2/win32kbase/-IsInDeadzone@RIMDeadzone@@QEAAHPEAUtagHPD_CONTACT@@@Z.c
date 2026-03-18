/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1401EA84C
 * Callers:
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x14017C014 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 * Callees:
 *     PtInRect @ 0x1400DCAE4 (PtInRect.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z @ 0x14015C910 (-_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1401EAAF4 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1401F22A8 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(RIMDeadzone *this, struct tagHPD_CONTACT *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // esi
  DeadzonePalmTelemetry *v9; // rcx
  unsigned int Angle; // r13d
  unsigned int v11; // r12d
  __int64 v12; // rbx
  __int64 UserSessionState; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r8
  unsigned int v17; // edx
  DeadzonePalmTelemetry *v18; // rcx
  struct tagPOINT v20; // [rsp+60h] [rbp+8h]
  struct tagPOINT v21; // [rsp+68h] [rbp+10h]

  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 572);
  v4 = 0;
  if ( (*((_DWORD *)a2 + 671) & 4) != 0 || (v5 = 1LL, (*((_DWORD *)a2 + 611) & 4) == 0) )
    v5 = 0LL;
  v6 = *((_DWORD *)this + 4);
  if ( v6 && *((_DWORD *)this + 10) )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v21.x = *((_DWORD *)a2 + 618) / 100;
        v21.y = *((_DWORD *)a2 + 619) / 100;
        v20.x = *((_DWORD *)this + 11) / 100;
        v20.y = *((_DWORD *)this + 12) / 100;
        v8 = (v21.x - v20.x) * (v21.x - v20.x) + (v21.y - v20.y) * (v21.y - v20.y);
        Angle = RIMDeadzone::_GetAngle(v21, v20);
        v11 = 0;
        if ( *((_DWORD *)this + 8) )
        {
          while ( 1 )
          {
            v12 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL * v11);
            UserSessionState = W32GetUserSessionState(v9);
            if ( RIMDeadzone::_IsAngleWithinRange(Angle, *(_DWORD *)(UserSessionState + 272), v12) )
            {
              v14 = *((_QWORD *)this + 3);
              v15 = 0LL;
              if ( *(_DWORD *)(v14 + 24LL * v11 + 16) )
                break;
            }
LABEL_20:
            if ( ++v11 >= *((_DWORD *)this + 8) )
              return v4;
          }
          while ( 1 )
          {
            v16 = *(_QWORD *)(v14 + 24LL * v11 + 8);
            if ( v8 >= *(_DWORD *)(v16 + 8 * v15) / 0x64u * (*(_DWORD *)(v16 + 8 * v15) / 0x64u) )
            {
              v17 = *(_DWORD *)(v16 + 8 * v15 + 4) / 0x64u;
              if ( v8 < v17 * v17 )
                break;
            }
            if ( v5 )
            {
              v9 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
              if ( v9 )
              {
                if ( v8 < 0x57E4 )
                  DeadzonePalmTelemetry::UpdateTelemetryBuffer(v9, v8, Angle, 0);
              }
            }
            v14 = *((_QWORD *)this + 3);
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= *(_DWORD *)(v14 + 24LL * v11 + 16) )
              goto LABEL_20;
          }
          v4 = 1;
          if ( v5 )
          {
            v18 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
            if ( v18 )
              DeadzonePalmTelemetry::UpdateTelemetryBuffer(v18, v8, Angle, 1);
          }
        }
      }
    }
    else
    {
      return PtInRect((_DWORD *)this + 6, *((_QWORD *)a2 + 309));
    }
  }
  return v4;
}
