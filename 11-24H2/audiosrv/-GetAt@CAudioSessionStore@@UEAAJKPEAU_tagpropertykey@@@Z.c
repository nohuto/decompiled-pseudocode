/*
 * XREFs of ?GetAt@CAudioSessionStore@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x180105F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionStore::GetAt(CAudioSessionStore *this, __int64 a2, struct _tagpropertykey *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, struct _tagpropertykey *))(**((_QWORD **)this + 5) + 32LL))(
           *((_QWORD *)this + 5),
           a2,
           a3);
}
