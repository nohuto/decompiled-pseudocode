/*
 * XREFs of ?ObjectType@CAccessObjectAce@CDacl@ATL@@UEBA?AU_GUID@@XZ @ 0x180049A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall ATL::CDacl::CAccessObjectAce::ObjectType(
        ATL::CDacl::CAccessObjectAce *this,
        struct _GUID *__return_ptr retstr)
{
  GUID *v2; // rax
  GUID *v3; // rcx
  struct _GUID *result; // rax

  v2 = (GUID *)*((_QWORD *)this + 19);
  v3 = &GUID_NULL;
  if ( v2 )
    v3 = v2;
  result = retstr;
  *retstr = *v3;
  return result;
}
