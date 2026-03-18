/*
 * XREFs of ??1CScalarForce@@EEAA@XZ @ 0x18021ED3C
 * Callers:
 *     ??_ECScalarForce@@EEAAPEAXI@Z @ 0x1802AF820 (--_ECScalarForce@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CScalarForce::~CScalarForce(CScalarForce *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
}
